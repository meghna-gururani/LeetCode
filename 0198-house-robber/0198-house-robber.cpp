class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n);
        if(n==1) return nums[0];
        dp[0]=nums[0];
        dp[1]=max(dp[0],nums[1]);
        for(int i=2;i<n;i++){
            int take=nums[i]+dp[i-2];
            int no_take=dp[i-1];
            dp[i]=max(take,no_take);
        }
      return dp[n-1];  
    }
};