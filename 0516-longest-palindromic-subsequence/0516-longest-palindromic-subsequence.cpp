class Solution {
public:
    int f(int i,int j,string &str1,string &str2,vector<vector<int>>&dp){
      if(i<0 || j<0){
        return 0;
      }
      if(dp[i][j]!=-1) return dp[i][j];
      if(str1[i]==str2[j])
        return dp[i][j]= 1+f(i-1,j-1,str1,str2,dp);
      return dp[i][j]= max(f(i-1,j,str1,str2,dp),f(i,j-1,str1,str2,dp));

    }
    int longestPalindromeSubseq(string s) {
     int n=s.size();
     vector<vector<int>>dp(n,vector<int>(n,-1));
     string t=s;
     reverse(t.begin(),t.end());
     return f(n-1,n-1,s,t,dp);   
    }
};