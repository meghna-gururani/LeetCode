class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>freqq;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==-2) continue;
            int freq=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    freq++;
                    nums[j]=-2;
                }
            }
            freqq.push_back(freq);
            ans.push_back(nums[i]);
        }
        for(int i=0;i<freqq.size()-1;i++){
            for(int j=0;j<freqq.size()-i-1;j++){
                if(freqq[j]<freqq[j+1]){
                    swap(freqq[j],freqq[j+1]);
                    swap(ans[j],ans[j+1]);
                }
            }
        }
        return vector<int>(ans.begin(),ans.begin()+k);
    }
};