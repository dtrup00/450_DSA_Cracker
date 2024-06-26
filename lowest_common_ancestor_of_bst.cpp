/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int lower = min(p->val, q->val), higher = max(p->val, q->val);
        while(root) {
            if(root->val > higher) root = root->left;
            else if(root->val < lower) root= root->right;
            else return root;
        }
        return NULL;
    }
};