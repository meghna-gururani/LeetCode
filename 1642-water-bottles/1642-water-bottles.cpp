class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int s=numBottles;
        int rem=0;
        while(numBottles>0){
            int quo=(numBottles+rem)/numExchange;
            s+=quo;
            rem=(numBottles+rem)%numExchange;
            numBottles=quo;
        }
        return s;
    }
};
