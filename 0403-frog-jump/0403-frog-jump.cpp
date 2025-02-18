class Solution {
public:
    unordered_map<int,int>mp;
    int n;
    vector<vector<int>>t;

    bool solve(vector<int>& stones,int curr,int prev){
      if(curr==n-1)
         return true;
      if(t[curr][prev]!=-1){
        return t[curr][prev];
      }
      bool res=false;
      for(int i=prev-1;i<=prev+1;i++){
         if(i>0){
             int nstone=stones[curr]+i;
             if(mp.find(nstone)!=mp.end()){
                 res=res || solve(stones,mp[nstone],i); 
        // ensures that as soon as one recursive call returns true, res remains true permanently.
             }
           }     
       } 
       return t[curr][prev]=res;
    }

    bool canCross(vector<int>& stones) {
      n=stones.size();
      t.assign(n, vector<int>(n + 1, -1));
      for(int i=0;i<n;i++){
        mp[stones[i]]=i;
      }
      return solve(stones,0,0);
    }

       
};