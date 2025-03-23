class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>res;
        for(int i=0;i<nums.size();i++){
            int complement=target-nums[i];
            if(res.find(complement)!=res.end()){
                return {i,res[complement]};
            }
            res[nums[i]]=i;
        }
        return {} ;
    }
};