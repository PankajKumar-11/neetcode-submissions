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
    int cnt = 0;
    void count(TreeNode * root , int maxi){
        if(!root) return;

        if(root->val >= maxi){
            maxi = root->val;
            cnt++;
        } 
        count(root->left , maxi);
        count(root->right , maxi);

    }
    int goodNodes(TreeNode* root) {
        count(root , root->val);
        return cnt;

    }
};
