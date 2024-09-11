class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return true;
        }
        int step=nums[0];
        for(int i=1;i<n;i++){
            if(step==0){
                return false;
            }
            step=max(step-1,nums[i]);
            if(i+step>=n-1){
                return true;
            }      
        }
     return false;     
    }
};