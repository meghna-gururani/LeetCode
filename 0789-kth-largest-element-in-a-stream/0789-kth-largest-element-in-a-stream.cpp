
class KthLargest {
public:
    int k;
    vector<int> nums;
    
    KthLargest(int k,vector<int>& nums) : k(k), nums(nums) {
        sort(this->nums.begin(), this->nums.end());
    }
    
    int add(int val) {
        auto it =lower_bound(nums.begin(), nums.end(), val);
        nums.insert(it, val);
    
        return nums[nums.size() - k];
    }
};