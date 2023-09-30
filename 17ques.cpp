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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        bool lefttoright=true;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            vector<int>result(s);
             for(int i=0;i<s;i++)
             {
                 TreeNode* frontnode=q.front();
                 q.pop();
                 int id=lefttoright?i:s-i-1;
                 result[id]=frontnode->val;
                 if(frontnode->left)
                 q.push(frontnode->left);
                 if(frontnode->right)
                 q.push(frontnode->right);
             }
             ans.push_back(result);
             lefttoright=!lefttoright;
             
        }
        
        return ans;
    }
};
