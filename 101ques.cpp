class Solution {
public:
    int addDigits(int num) {
        if(num>=0&&num<10) return num;
        int rem=0;
        while(num>0)
        {
            int d=num%10;
            rem+=d;
           num=num/10;
        }
        return addDigits(rem);
    }
};
