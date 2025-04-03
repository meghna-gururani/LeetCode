class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n=nums.size(), sum=0;;
       vector<int>prefix(n);
       vector<int>suff(n);
       prefix[0]=nums[0];
       suff[n-1]=nums[n-1]; 
       for(int i=1;i<n;i++){
        prefix[i]=max(prefix[i-1],nums[i]);
        suff[n-i-1]=min(suff[n-i],nums[n-i-1]);
       }
       for(int j=1;j<=n-2;j++){
         if(prefix[j-1]<nums[j] && nums[j]<suff[j+1])
            sum+=2;
         else if(nums[j-1]<nums[j] && nums[j]<nums[j+1]) 
           sum+=1;
       }
       return sum;
    }
};