class Solution {
public:
    int maxScore(string s) {
        int max_sum=0;
        int sum=0;
        for(int i=1;i<s.size();i++){
            for(int j=0;j<s.size();j++){
                if(j<i){
                    if(s[j]=='0')
                      sum++;
                }
                else{
                  if(s[j]=='1')
                     sum++;
                }
            }
            max_sum=max(sum,max_sum);
            sum=0;
        }
        return max_sum;
    }
};