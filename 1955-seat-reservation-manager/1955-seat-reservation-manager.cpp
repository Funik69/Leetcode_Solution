class SeatManager {
public:
priority_queue<int,vector<int>,greater<int>> pq;
vector<int> v;
    SeatManager(int n) {
        v.resize(n+1,0);
        for(int i=1;i<=n;i++) pq.push(i);
    }
    
    int reserve() {
        int a=pq.top();
        pq.pop();
        v[a]=1;
        return a;
    }
    
    void unreserve(int sno) {
        v[sno]=1;
        pq.push(sno);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */