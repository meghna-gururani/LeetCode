class Solution {
public:
   bool f(int i,int target,vector<int>&num,vector<vector<int>>&dp){
    if(target==0) return true;
    if(i==0) return (num[0]==target);

    if(dp[i][target]!=-1) return dp[i][target];

    bool not_take=f(i-1,target,num,dp);
    bool take=false;
    if(num[i]<=target){
        take=f(i-1,target-num[i],num,dp);
    }
    return dp[i][target]=take|not_take;
   }

    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int i=0;i<n;i++){
            total=total+nums[i];
        }
        vector<vector<int>>dp(n+1,vector<int>((total/2)+1,-1));
        if(total%2!=0) return false;
        return f(n-1,total/2,nums,dp);
    }
};