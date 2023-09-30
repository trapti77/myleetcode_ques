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
    TreeNode*solve(vector<int>&in,vector<int>&post,int &id,int ins,int ine,int n)
    {
        if(id<0||ins>ine)
        {
            return NULL;
        }
        int ele=post[id--];
        TreeNode*root=new TreeNode(ele);
        int pos=position(in,ele,n);
         root->right=solve(in,post,id,pos+1,ine,n);
        root->left=solve(in,post,id,ins,pos-1,n);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=inorder.size();
        int postindex=n-1;
        TreeNode*ans=solve(inorder,postorder,postindex,0,n-1,n);
        return ans;
    }
};
