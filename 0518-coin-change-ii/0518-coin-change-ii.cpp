class Solution {
public:
    int f(int ind,int target,vector<int>&arr,vector<vector<int>>&dp){
        if(ind==0){
            if(target%arr[ind]==0) return 1;
             else return 0;
        }
        if(dp[ind][target]!=-1) return dp[ind][target];
        int not_take=f(ind-1,target,arr,dp);
        int take=0;
        if(target>=arr[ind]) 
         take=f(ind,target-arr[ind],arr,dp);
        return dp[ind][target]=take+not_take;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
      return f(n-1,amount,coins,dp);  
    }
};