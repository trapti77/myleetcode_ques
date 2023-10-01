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
pair<bool,int>sum(TreeNode*root)
{
    if(root==NULL)
    {
    pair<bool,int>p=make_pair(true,0);
    return p;
    }
     if(root->left==NULL&&root->right==NULL)
    {
    pair<bool,int>p=make_pair(true,root->val);
    return p;
    }
    pair<bool,int>leftans=sum(root->left);
    pair<bool,int>rightans=sum(root->right);
    bool left=leftans.first;
    bool right=rightans.first;
    bool value=root->val==leftans.second+rightans.second;
       pair<bool,int>ans;
        if(left&&right&&value)
        {
           ans.first=true;
           ans.second=root->val+root->left->val+root->right->val;
        }
        else
        {
        ans.first= false;
        }
        return ans;
}
    bool checkTree(TreeNode* root) {
      pair<bool,int>ans=sum(root); 
      return ans.first;
    }
};
