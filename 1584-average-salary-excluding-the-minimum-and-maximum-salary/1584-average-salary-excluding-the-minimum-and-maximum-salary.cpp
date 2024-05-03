class Solution {
public:
    double average(vector<int>& salary) {
        double avg=0.0;
        sort(salary.begin(), salary.end());
        int n=salary.size();
        for(int i=1;i<n-1;i++){
            avg+=salary[i];
        }
        avg=avg/(n-2);
        return avg;
    }
};