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
    int findBottomLeftValue(TreeNode* root) {
        if (root == nullptr) {
            return -1;
        }

        queue<TreeNode*> levelNodes;
        levelNodes.push(root);
        int leftmostValue = root->val;

        while (!levelNodes.empty()) {
            int levelSize = levelNodes.size();
            leftmostValue = levelNodes.front()->val;

            for (int i = 0; i < levelSize; ++i) {
                TreeNode* currentNode = levelNodes.front();
                levelNodes.pop();

                if (currentNode->left != nullptr) {
                    levelNodes.push(currentNode->left);
                }
                if (currentNode->right != nullptr) {
                    levelNodes.push(currentNode->right);
                }
            }
        }

        return leftmostValue;
    }
};
