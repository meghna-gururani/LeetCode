class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
    int res=0,count=0;
       for(int i=1;i<=n;i++){
         bool flag=false;
         for(int j=0;j<banned.size();j++){
             if(i==banned[j]){
                 flag=true;
                 break;
                }
            }
          if(flag)
            continue;
          if(res+i>maxSum)
              break;
        res+=i;
        count++;
       } 
       return count;
    }
};