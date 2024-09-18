class Solution {
public:
    static bool compare(string &a, string &b){
      return a+b>b+a;  
    }
    string largestNumber(vector<int>& nums) {
        vector<string>res;
        string s;
        for(int i=0;i<nums.size();i++){
            res.push_back(to_string(nums[i]));
        }
        sort(res.begin(),res.end(),compare);

        for(int i=0;i<res.size();i++){
             s=s+res[i];
        }
         if(s[0] == '0') return "0";

        return s;
    }
};