class Solution {
public:
    long long mostPoints(vector<vector<int>>& questions) {
       int n=questions.size(); 
        vector<long long>dp(n);
       dp[n-1]=questions[n-1][0];
       for(int i=n-2;i>=0;i--){
        int next=i+questions[i][1]+1;
        long long take=questions[i][0]+(next<n ? dp[next]:0);
        dp[i]=max(take,dp[i+1]);
       }
    return dp[0];
    }
};