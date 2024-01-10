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

int ans;
void buildGraph(TreeNode*root,vector<vector<int>> & adjj){
    if(root==NULL){
        return;
    }

    if(root->left){
        adjj[root->val].push_back(root->left->val);
        adjj[root->left->val].push_back(root->val);
    }
    if(root->right){
        adjj[root->val].push_back(root->right->val);
        adjj[root->right->val].push_back(root->val);
    }

    buildGraph(root->left,adjj);
    buildGraph(root->right,adjj);
}

void bfs(int start,vector<vector<int>> &adjj,vector<bool>&vis){
    queue<int> q;
    q.push(start);
    while(!q.empty()){
        int k = q.size();

        while(k--){
            int u = q.front();
            q.pop();
            vis[u]=1;
            for(int i=0;i<adjj[u].size();i++){
                if(!vis[adjj[u][i]])
                q.push(adjj[u][i]);
            }
        }
        ans++;
    }
}
    int amountOfTime(TreeNode* root, int start) {
        vector<vector<int>>adjj(100001);
        vector<bool>vis(100001);

        buildGraph(root,adjj);
        ans=0;
        bfs(start,adjj,vis);
        return ans-1;
    }
};
