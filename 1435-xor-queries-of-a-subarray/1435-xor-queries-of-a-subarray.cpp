class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>res;
        for(int i=0;i<queries.size();i++){
            int xorr=arr[queries[i][0]];
            for(int j=queries[i][0]+1;j<=queries[i][1];j++){
                xorr=xorr^arr[j];
            }
            res.push_back(xorr);
        }
        return res;
    }
};