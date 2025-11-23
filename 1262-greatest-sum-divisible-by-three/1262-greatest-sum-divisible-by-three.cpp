class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        const int NEG = -1000000000;          
        vector<int> dp = {0, NEG, NEG};     
        for (int x : nums) {
            vector<int> prev(dp);
            for (int r = 0; r < 3; ++r) {
                if (prev[r] == NEG) continue;          
                int newR = (r + x) % 3;
                dp[newR] = max(dp[newR], prev[r] + x);
            }
        }

        return max(0, dp[0]); 
    }
};
