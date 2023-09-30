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
int position(vector<int>&v,int e,int n)
{
for(int i=0;i<n;i++)
    if(v[i]==e)
    {
        return i;
    }
    return -1;
}
    TreeNode*solve(vector<int>&in,vector<int>&pre,int &id,int ins,int ine,int n)
    {
        if(id>=n||ins>ine)
        {
            return NULL;
        }
        int ele=pre[id++];
        TreeNode*root=new TreeNode(ele);
        int pos=position(in,ele,n);
        root->left=solve(in,pre,id,ins,pos-1,n);
         root->right=solve(in,pre,id,pos+1,ine,n);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        int preindex=0;
        TreeNode*ans=solve(inorder,preorder,preindex,0,n-1,n);
        return ans;
    }
};
