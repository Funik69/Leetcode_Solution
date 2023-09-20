/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
       queue<TreeNode*> q;
       q.push(root);
       vector<double> ans ;
       if(root==NULL) return ans;
       while(!q.empty()){
           int size = q.size();
           double avg =0.00000;
           for(int i=0;i<size;i++){
               auto node = q.front();
               avg+=node->val;
               q.pop();
               if(node->left) q.push(node->left);
               if(node->right) q.push(node->right);
           }
           ans.push_back(avg/size);
       }
       return ans;
    }
};