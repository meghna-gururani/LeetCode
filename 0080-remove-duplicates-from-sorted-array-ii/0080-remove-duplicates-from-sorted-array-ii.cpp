class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        if(nums.size()<2){
            return k;
        }
        for(int i=2;i<nums.size();i++){
          if(nums[k]==nums[i] && nums[k-1]==nums[i]){
            continue;
          }
          else{
            k++;
            nums[k]=nums[i];
          }
        }
        return k+1;
    }
};