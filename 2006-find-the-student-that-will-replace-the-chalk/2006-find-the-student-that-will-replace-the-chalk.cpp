class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long s=0;
        for(int i=0;i<chalk.size();i++){
            s+=chalk[i];
        }
        k=k%s;
        for(int i=0;i<chalk.size();i++){
                if(chalk[i]<=k){
                    k=k-chalk[i];
                }
                else{
                    return i;
                }
            }
      return 0;  
    }
};