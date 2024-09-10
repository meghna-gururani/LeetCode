class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%(nums.size());
        //reverse the entire linked list
        reverse(nums.begin(),nums.end());
        //reverse first k elements
        reverse(nums.begin(),nums.begin()+k);
        //reverse last k to n elements
        reverse(nums.begin()+k,nums.end());    
    }
};