class Solution {
public:
    vector<vector<int>> adjacencyList;  // Adjacency list to represent the course prerequisites
    vector<int> inDegrees;  // In-degree of each course (number of prerequisites)

    // Kahn's Algorithm
    int calculateMinimumTime(int n, vector<int>& time) {
        vector<int> waitTime(n + 1) ; // keep track of wait time for each course
        queue<int> q;  // queue for topological sort
        int maxWaitTime = 0;  // Maximum wait time for completing all courses

        // Initialize the queue with courses that have no prerequisites
        for (int i = 1; i <= n; i++) {
            if (inDegrees[i] == 0) {
                q.push(i);
                waitTime[i] = time[i - 1] ;
                maxWaitTime = max(maxWaitTime, waitTime[i]);
            }
        }

        // Perform topological sort
        while (!q.empty()) {
            int currentCourse = q.front();
            q.pop();

            // Process each course that depends on the current course
            for (auto childCourse : adjacencyList[currentCourse]) {
                inDegrees[childCourse]--;
                waitTime[childCourse] = max(time[childCourse - 1] + waitTime[currentCourse], waitTime[childCourse]);
                maxWaitTime = max(maxWaitTime, waitTime[childCourse]);

                // If all prerequisites are completed, update the wait time and add to the queue
                if (inDegrees[childCourse] == 0) 
                    q.push(childCourse);
            }
        }

        return maxWaitTime;
    }

    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        adjacencyList.resize(n + 1);
        inDegrees.resize(n + 1);

        // Build the adjacency list and calculate in-degrees for each course
        for (int i = 0; i < relations.size(); i++) {
            auto prerequisitePair = relations[i];
            adjacencyList[prerequisitePair[0]].push_back(prerequisitePair[1]);
            inDegrees[prerequisitePair[1]]++;
        }

        return calculateMinimumTime(n, time);
    }
};