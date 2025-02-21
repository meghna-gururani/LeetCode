class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       int n=candies.size();
       vector<bool>res;
       int max=INT_MIN;
       for(int i=0;i<n;i++){
         if(candies[i]>max)
            max=candies[i];
       }
        for(int i=0;i<n;i++){
          if(candies[i]+extraCandies>=max){
            res.push_back(true);}
          else {
            res.push_back(false);}
        }
        return res;
    }
};