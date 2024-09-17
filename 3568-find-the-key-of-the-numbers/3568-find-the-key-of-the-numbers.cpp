class Solution {
public:
    int generateKey(int num1, int num2, int num3){
        string s1=string(4 - to_string(num1).length(),'0')+to_string(num1);
        string s2=string(4 - to_string(num2).length(),'0')+to_string(num2);
        string s3=string(4 - to_string(num3).length(),'0')+to_string(num3);
        int sum=0;
        for(int i=0;i<4;i++){
            sum=sum*10+min(min(s1[i]-'0',s2[i]-'0'),s3[i]-'0');
        }
        return sum;
    }
};