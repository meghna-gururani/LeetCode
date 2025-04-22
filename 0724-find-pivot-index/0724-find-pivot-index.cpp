class Solution {
public:
    int pivotIndex(vector<int>& nums) {
      int n=nums.size();
      vector<int>arr1(n,0);
      vector<int>arr2(n,0);
      arr1[0]=nums[0],arr2[n-1]=nums[n-1];
      for(int i=1;i<n;i++){
         arr1[i]=arr1[i-1]+nums[i];
         arr2[n-i-1]=nums[n-i-1]+arr2[n-i];
      }
      for(int i=0;i<n;i++){
        if(arr1[i]==arr2[i]) return i;
      } 
      return -1;
    } 
};