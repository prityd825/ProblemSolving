Problem_link: https://leetcode.com/problems/binary-tree-inorder-traversal/
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        inOrderHelper(root, result);
        return result;
    }

private:
    void inOrderHelper(TreeNode* node, vector<int>& result) {
        if (node == nullptr) {
            return;
        }

        inOrderHelper(node->left, result);
        result.push_back(node->val);
        inOrderHelper(node->right, result);
    }
};
