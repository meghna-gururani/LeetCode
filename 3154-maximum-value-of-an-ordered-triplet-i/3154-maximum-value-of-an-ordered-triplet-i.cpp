class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long val=0,temp;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                  temp=1LL*(nums[i]-nums[j])*nums[k];
                  val=max(val,temp);
                }
            }
        }
        return val;
    }
};