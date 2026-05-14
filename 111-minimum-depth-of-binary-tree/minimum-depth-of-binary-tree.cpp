class Solution {
public:
    int minDepth(TreeNode* root) {

        if (root == NULL) return 0;

        // leaf node
        if (root->left == NULL && root->right == NULL) {
            return 1;
        }

        // if one side is NULL
        if (root->left == NULL) {
            return 1 + minDepth(root->right);
        }

        if (root->right == NULL) {
            return 1 + minDepth(root->left);
        }

        return 1 + min(minDepth(root->left),
                       minDepth(root->right));
    }
};