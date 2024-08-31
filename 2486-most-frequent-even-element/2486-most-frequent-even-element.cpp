class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int maxCount = 0;  
        int result = -1;   

        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] % 2 != 0) {
                continue;
            }
            int count = 1;
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] == nums[j]) {
                    count++;
                } else {
                    break;
                }
            }
            if(count > maxCount) {
                maxCount = count;
                result = nums[i];
            }
            i += (count - 1);
        }
        return result;       
    }
};
