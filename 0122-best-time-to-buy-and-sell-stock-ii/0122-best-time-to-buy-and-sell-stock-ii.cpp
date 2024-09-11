class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low=INT_MAX;
        int max_pro=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<low){
                low=prices[i];
            }
            else{
                max_pro+=prices[i]-low;
                i--;
                low=INT_MAX;
            }
        }
        return max_pro;
    }
};