class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ele = *max_element(nums.begin(),nums.end());
        int c=0,m=0;
        for(int i=0;i<nums.size();i++){    
            if(nums[i] == ele)
                c++;
            else{
                if(c > m)
                    m = c;
                c = 0;
            }
            }
        return(max(c,m));
        }
};