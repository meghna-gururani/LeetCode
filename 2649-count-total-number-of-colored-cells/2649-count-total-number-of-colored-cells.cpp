class Solution {
public:
    long long coloredCells(int n) {
        long long x=n;
      
        return 1+4*((x-1)*x)/2;
    }
};