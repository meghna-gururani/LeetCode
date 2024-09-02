class Solution {
public:
    int countTriples(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<n;j++){
                if(i==j){
                    continue;
                }
               int temp=(i*i)+(j*j);
               int sq=sqrt(temp);
               if(sq>n){
                  break;
                }
                if((sq*sq)==(temp)){
                    count++;
                }
            }  
        }
     return count;
        
    }
};