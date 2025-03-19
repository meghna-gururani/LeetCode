class Solution {
public:
    int find(vector<int>& nums,int index, int current_sum,int target){
        if(index==nums.size()){
            return (current_sum==target)?1:0;
        }
        int add=find(nums,index+1,current_sum+nums[index],target);
        int sub=find(nums,index+1,current_sum-nums[index],target);
        return add+sub;      
    }
    int findTargetSumWays(vector<int>& nums, int target) {
      return find(nums,0,0,target);  
    }
};