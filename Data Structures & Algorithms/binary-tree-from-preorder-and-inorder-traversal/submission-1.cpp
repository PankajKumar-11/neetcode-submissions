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
    int idx = 0;
    TreeNode* build(vector<int>& preorder, unordered_map<int, int>& inorderMap, int low, int high) {
        if (low > high) return NULL;
        TreeNode* node = new TreeNode(preorder[idx]);
        idx++;

        int idxInInorder = inorderMap[node->val];
        node->left = build(preorder, inorderMap, low, idxInInorder - 1);
        node->right = build(preorder, inorderMap, idxInInorder + 1, high);

        return node;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int, int> inorderMap;
        for (int i = 0; i < inorder.size(); i++) {
            inorderMap[inorder[i]] = i;
        }
        return build(preorder, inorderMap, 0, inorder.size()-1);
    }
};
