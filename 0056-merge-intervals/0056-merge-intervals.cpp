class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
      vector<vector<int>>ans;
      sort(intervals.begin(),intervals.end());
      int i=0;
      while(i<intervals.size()){
        int start=intervals[i][0],end=intervals[i][1];
        while(i+1<intervals.size() && end>=intervals[i+1][0]){
            i++;
            end=max(intervals[i][1],end);
        }
        ans.push_back({start,end});
        i++;
      } 
      return ans; 
    }
};