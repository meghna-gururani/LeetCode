class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();
        long long val=0;
        vector<int>prefix(n);
        vector<int>suff(n);
        prefix[0]=nums[0],suff[n-1]=nums[n-1];
       for(int i=1;i<n;i++){
        prefix[i]=max(nums[i],prefix[i-1]);
        suff[n-i-1]=max(nums[n-i-1],suff[n-i]);
       }
       for(int i=1;i<n-1;i++){
        val=max(val,1LL*(prefix[i-1]-nums[i])*suff[i+1]);
       }
       return val;
    }
};