class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1){
            return true;
        }
        long long sum=1;
        while(sum<=n){
           if(sum*2==n){
            return true;
           }
           sum=sum*2;
        }
    return false;
    }
};