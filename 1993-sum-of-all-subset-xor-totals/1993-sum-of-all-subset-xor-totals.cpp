class Solution {
public:
    int xorrr(int i,vector<int>arr,int n,int xorr){
        if(i==n){
          return xorr;  
        }   
        int left=xorrr(i+1,arr,n,xorr^arr[i]);
        int right=xorrr(i+1,arr,n,xorr);
    return left+right;
    }

    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        int summ;
       if(n==0){
         return 0;
       }
       else{
         summ=xorrr(0,nums,n,0);
       }
    return summ;
    }
};