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
   TreeNode * ans = NULL;
    void ancestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root) return;
        if (p->val > root->val) {
            ancestor(root->right, p, q);
        } else if (q->val < root->val) {
            ancestor(root->left, p, q);
        } else {
            ans = root;
            return ;
        }
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root || root == p || root == q) return root;
        if (p->val < q->val) {
            ancestor(root, p, q);
        } else {
            ancestor(root, q, p);
        }
        return ans;
    }
};
