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
    int diameterOfBinaryTree(TreeNode* root) {
        int maxValue=0;
        calculateDepth(root,maxValue);
        return maxValue;
    }

    int calculateDepth(TreeNode* root, int& maxValue){
        if(root == nullptr){
            return 0;
        }

        int leftDepth = calculateDepth(root->left,maxValue);
        int rightDepth = calculateDepth(root->right,maxValue);

        maxValue = max(maxValue,leftDepth+rightDepth);
        return 1+ max(leftDepth,rightDepth);
    }
};
