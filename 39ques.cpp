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
/*int height(TreeNode*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    int ans=max(left,right)+1;
    return ans;
}*/
pair<int,int>diameterheight(TreeNode*root)
{
    
    if(root==NULL)
    {
        pair<int,int>p=make_pair(0,0);
        return p ;
    }
    pair<int,int>ans;
    pair<int,int>left=diameterheight(root->left);
    pair<int,int>right=diameterheight(root->right);
    int  l=left.first;
    int r=right.first;
    int h=left.second+right.second+1;
ans.second=max(left.second,right.second)+1;
  ans.first=max(h,max(l,r));
    return ans;
}
    int diameterOfBinaryTree(TreeNode* root) {
        /*int ans;
        if(root==NULL)
        {
            return 0;
        }
        int left=diameterOfBinaryTree(root->left);
        int right=diameterOfBinaryTree(root->right);
        // ans=height(root->left)+height(root->right);
         int an=max(ans,max(left,right));
          return an;*/
          pair<int,int>a=diameterheight(root);
          return a.first-1;
    }
   
};
