problem_link: https://leetcode.com/problems/construct-string-from-binary-tree/description/?envType=daily-question&envId=2023-12-08
class Solution {
public:
    string tree2str(TreeNode* root) {
        if(root == NULL){
            return "";
        }
        string str = to_string(root->val);
        if(root->left){
            str+="(" +tree2str(root->left) +")";
        }
        else if(root->right){
            str+="()";
        }
        if(root->right){
            str+="(" +tree2str(root->right) + ")";
        }
        return str;
    }
};
