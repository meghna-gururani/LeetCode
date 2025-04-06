class Solution {
public:
    int f(int i,int j, vector<vector<int>>&arr,vector<vector<int>>&dp){
        if(i==0 && j==0) return arr[0][0];
        if(i<0 || j<0) return 1e9;
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int up=arr[i][j]+f(i-1,j,arr,dp);
        int left=arr[i][j]+f(i,j-1,arr,dp);
        return dp[i][j]=min(up,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return f(n-1,m-1,grid,dp);
    }
};