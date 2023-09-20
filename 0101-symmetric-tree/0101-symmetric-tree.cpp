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
bool soll(TreeNode* p,TreeNode* q){
    if(p==NULL || q==NULL) return p==q;
    return soll(p->left,q->right) and soll(p->right,q->left) and p->val == q->val;
}
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return 1;
        return soll(root->left, root->right);
    }
};