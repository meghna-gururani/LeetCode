class Solution {
public:
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}
    bool isSameAfterReversals(int num) {
        int rev1=reverseNumber(num);
        int rev2=reverseNumber(rev1);
        if(rev2==num){
            return true;
        }
        else{
            return false;
        }
        
    }
};