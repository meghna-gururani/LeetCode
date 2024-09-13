class Solution {
public:
    int hIndex(vector<int>& citations) {
        int h=0;
        sort(citations.begin(),citations.end(),greater<int>());
        for(int i=0;i<citations.size();i++){
            if(citations[i]>=i+1){
                h=i+1;
            }
            else{
                break;
            }
        }
        return h;
    }
};