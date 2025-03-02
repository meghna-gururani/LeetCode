class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int>merged;
        for(int i=0;i<nums1.size();i++){
            merged[nums1[i][0]]+=nums1[i][1];
        }
         for(int i=0;i<nums2.size();i++){
            merged[nums2[i][0]]+=nums2[i][1];
        }
        vector<vector<int>> result;
        for (auto &entry : merged) {
            result.push_back({entry.first, entry.second});
        }
        return result;
    }


      /*  int i=0,j=0,k=0;
        vector<vector<int>>res;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i][0]==nums2[j][0]){
               res.push_back({nums1[i][0],nums1[i][1]+nums2[j][1]}); 
              i++,j++;   
            }
            else if(nums1[i][0]<nums2[j][0]){
                res.push_back(nums1[i]);
                i++;
            }
            else{
                res.push_back(nums2[j]);
                j++;
            }
            k++;
        }
    while(i<nums1.size()){
        res.push_back(nums1[i]);
                i++; 
    }
    while(j<nums2.size()){
     res.push_back(nums2[j]);
                j++;
    }
    return res;
 } */
};