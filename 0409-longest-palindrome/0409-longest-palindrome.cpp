class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>freq(128,0);
        for(char c:s){
            freq[c]++;
        }
        int count=0;
        bool hasodd=false;
        for(int i=0;i<128;i++){
          if(freq[i]%2==0){
           count=count+freq[i];
           cout<<count;
          }
          else{
            count=count+freq[i]-1;
            hasodd=true;}
        }
        if(hasodd){
            count+=1;
        }
    return count;
    }
};