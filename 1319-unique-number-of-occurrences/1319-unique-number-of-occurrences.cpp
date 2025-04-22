class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      unordered_map<int,int>mp;
      for(int num:arr){
        mp[num]++;
      }
      unordered_set<int>freq_set;
      for(auto &pair:mp){
        if(freq_set.find(pair.second)!=freq_set.end()){
            return false;
        }
        freq_set.insert(pair.second);
      }
      return true; 
    }
};