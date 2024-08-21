class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        if(income==0){
            return 0.0;
        }
        if(brackets[0][0]>income){
            return (income*brackets[0][1])/100.0;
        }
        double tax=brackets[0][1]*brackets[0][0];
        income=income-brackets[0][0];
        
        for(int i=1;i<brackets.size();i++){
            int n=brackets[i][0]-brackets[i-1][0];
            if(n>income){
                tax+=(income*brackets[i][1]);
                return tax/100;
            }
            else{
                tax+=(n*brackets[i][1]);
                income=income-n;
            }
        }
        return tax/100;
        
    }
};