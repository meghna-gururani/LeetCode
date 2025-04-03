class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
      int buy=0,profit=0;
      for(int i=1;i<n;i++){
        if(prices[i]<prices[buy])
           buy=i;
        else if(profit<prices[i]-prices[buy])
          profit=prices[i]-prices[buy];
        }
       return profit;
    }
};