class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> res;
        for(int i=0;i<n;i++){
            int k=0;
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    if(k==0){
                      res.push_back(nums1[i]);
                      k=1;
                    }
                    nums2[j]=-1;
                }
            }
        }
        return res;
        
    }
};