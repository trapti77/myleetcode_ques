/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
void postor(Node*root,vector<int>&v)
{
    if(root==NULL)
    {
        return ;
    }
    for(auto temp:root->children)
    {
        postor(temp,v);
    }
    v.push_back(root->val);
}
    vector<int> postorder(Node* root) {
        vector<int>ans;
    postor(root,ans);
    return ans;

    }

};
