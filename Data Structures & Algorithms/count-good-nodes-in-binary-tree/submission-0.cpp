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
    void dfs(TreeNode* node, int maxVal, int& cnt) {
        if(!node) return;
        if(node->val >= maxVal) {
            cnt++;
        dfs(node->left, node->val, cnt);
        dfs(node->right, node->val, cnt);
        }
        else {
        dfs(node->left, maxVal, cnt);
        dfs(node->right, maxVal, cnt);
        }
    }


    int goodNodes(TreeNode* root) {
        int cnt = 0;
        int maxVal = INT_MIN;
        dfs(root, maxVal, cnt);
        return cnt;
    }
};
