class Solution {
public:
    int minBitFlips(int start, int goal) {
       int xr= (int)(start^goal);  
       int s=0;
       while(xr>0){
        s+=(xr%2);
        xr/=2;
       }
       return s;
    }
};