class Solution {
public:

    int height(TreeNode* root, int& dia) {
        if (!root) return 0;

        int left = height(root->left,dia);
        int right = height(root->right,dia);

        dia = max(dia, left + right);

        return 1 + max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        int dia = INT_MIN;
        height(root, dia);
        return dia;
    }
};