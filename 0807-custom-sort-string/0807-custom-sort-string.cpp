class Solution {
public:
    string customSortString(string order, string s) {
        string neww="";
        int k=0;
        for(int i=0;i<order.length();i++){
            for(int j=0;j<s.length();j++){
                if(order[i]==s[j]){
                    neww+=order[i];
                    s[j]=NULL;
                }
            }    
        }
        for(int j=0;j<s.length();j++){
            if(s[j]!=NULL){
                neww=neww+s[j];
            }
        }
      return neww;  
    }
};