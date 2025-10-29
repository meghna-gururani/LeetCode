class Solution {
public:
    int smallestNumber(int n) {
       if(n==1) return 1;
       int m=0;
       while (pow(2,m)<=n){
        m++;
       }
       return pow(2,m)-1;
    }
};