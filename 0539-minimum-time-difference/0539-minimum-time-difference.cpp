class Solution {
public:
    int tomin(string s){
       int hour=(s[0]-'0')*10+(s[1]-'0');
       int min=(s[3]-'0')*10+(s[4]-'0');
       return hour*60+min;
    }
    int findMinDifference(vector<string>& timePoints){
        if(timePoints.size()<2){
            return 0;
        }
        vector<int>minn;
        for(int i=0;i<timePoints.size();i++){
            minn.push_back(tomin(timePoints[i]));
        }
        sort(minn.begin(),minn.end());
        int mindiff=INT_MAX;
        for(int i=1;i<minn.size();i++){
           mindiff = min(mindiff, minn[i] - minn[i - 1]);
        }    
        int cir= 1440 - (minn.back() - minn[0]);       
    return min(mindiff, cir);;
     }
};