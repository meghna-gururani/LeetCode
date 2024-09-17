class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>ans;
        ans.push_back(0);
        for(int i=0;i<gain.size();i++){
            int temp=ans.back()+gain[i];
            ans.push_back(temp);
        }
        int max=ans[0];
        for(int i=1;i<ans.size();i++){
            if(ans[i]>max)
                max=ans[i];
        }
    return max;
    }
};