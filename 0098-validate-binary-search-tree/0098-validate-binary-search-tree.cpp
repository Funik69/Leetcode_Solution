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
bool soll(TreeNode* root, long  min, long max){
    if(root==NULL)return true;
    if(root->val >=max || root->val<=min) return false;
    return (soll(root->right,root->val,max) and soll(root->left,min,root->val));
}
    bool isValidBST(TreeNode* root) {
        if(root->left ==NULL and root->right==NULL) return true;
        return soll(root,LONG_MIN,LONG_MAX);
    }
};