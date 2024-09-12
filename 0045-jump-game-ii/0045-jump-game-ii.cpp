class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=0,far=0,curr=0;
        int n=nums.size();

        for(int i=0;i<n-1;i++){
           far=max(far,i+nums[i]);
           if(i==curr){
            jump++;
            curr=far;
           }
           if(curr>=n-1){
             return jump;
           }
        }
        return jump;
    }

};
