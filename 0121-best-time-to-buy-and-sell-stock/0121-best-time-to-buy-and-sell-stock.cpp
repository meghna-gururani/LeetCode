class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<low){
                low=prices[i];
            }
            else if(profit<(prices[i]-low)){
                profit=prices[i]-low;
            }
        }
        return profit;
    }
};