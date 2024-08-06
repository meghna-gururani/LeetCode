class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int k=0;
        for(int i=1;i<nums.size();i++){

            if(nums[i-1]>=nums[i]){
                k++;
                if(k>1){
                    return false;
                }
                if(i>1 && nums[i-2]>=nums[i]){
                    nums[i]=nums[i-1];
                }
                }
            }
         return true;
    }  
};