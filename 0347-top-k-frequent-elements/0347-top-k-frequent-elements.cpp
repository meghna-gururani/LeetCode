class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        vector<pair<int,int>>res(freq.begin(),freq.end());
        sort(res.begin(),res.end(),[](auto &a,auto &b){
            return a.second>b.second;
        });
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(res[i].first);
        }
        return ans;
    }


};