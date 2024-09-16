class Solution {
public:
    int sumsquare(int n){
        int sum=0;
        while(n>0){
            int r=n%10;
            sum+=(r*r);
            n=n/10;
        }
        return sum;
    }

    bool isHappy(int n) {
        vector<int>res;
        while(n!=1){
            n=sumsquare(n);

            for(int i=0;i<res.size();i++){
                if(n==res[i])
                    return false;
            }
            res.push_back(n);
        }
        return true;
    }
};