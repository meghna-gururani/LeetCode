class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
      int total=0;
      for(int i=0;i<arr.size();i++){
        for(int j=i;j<arr.size();j++){
          if((j-i+1) % 2 != 0){
            for(int k=i;k<=j;k++){
                total=total+arr[k];
            }
          }
        }
      } 
      return total; 
    }
};