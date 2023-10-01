class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
       int st=arrivalTime+delayedTime;
       if(st<24)
       {
           return st;
       }
       else
       {
           if(arrivalTime>=delayedTime)
           {
               int s=24-arrivalTime;
               int ans=delayedTime-s;
               return ans;
           }
           else if(delayedTime>arrivalTime)
           {
               int t=24-delayedTime;
               int an=arrivalTime-t;
               return an;
           }
       }
       
      return 0;
    }
};
