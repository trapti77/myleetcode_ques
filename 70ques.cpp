class Solution {
public:
   void winner(queue<int>&q,int k)
   {
       if(q.size()==1)return;
       int c=0;
    while(++c!=k)
       {
        q.push(q.front());
        q.pop();
       }
q.pop();
winner(q,k);
   }
    int findTheWinner(int n, int k) {
       queue<int>qu;
       for(int i=1;i<=n;i++)
       {
           qu.push(i);
       }
       winner(qu,k);
       return qu.front();
    }
};
