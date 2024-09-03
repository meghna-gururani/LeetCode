class Solution {
public:
    int getLucky(string s, int k) {
        string neww;
        int sum;
        for(int i=0;i<s.size();i++){
            int y=(s[i]-'a')+1;
            neww=neww+to_string(y);
        }
        for(int i=0;i<k;i++){
            sum=0;
            for(int j=0;j<neww.size();j++){
                char ch=neww[j];
                sum=sum+(ch-'0');
        }
        neww=to_string(sum);
        }

      return sum; 
    }
};