class Solution {
public:
 /*   int gcdd(int a,int b){
      if(b==0){
        return a;
      }
      return gcdd(b,a%b);
    } */

    string gcdOfStrings(string str1, string str2) {
        string res="";
        if(str1+str2!=str2+str1){
            return "";
        }
        int gc=gcd(str2.length(),str1.length());
        return str1.substr(0,gc);
    }
};