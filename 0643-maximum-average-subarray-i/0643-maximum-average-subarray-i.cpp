class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k){
        double sum=0.0;
        int n=nums.size();
        if(n==1) return nums[0];

        for(int i=0;i<k;i++){
           sum+=nums[i];}

        double avg=sum;

        for(int j=k;j<n;j++){
            sum+=nums[j]-nums[j-k];
            avg=max(avg,sum);
         
        }
        return avg/k;
    }
};