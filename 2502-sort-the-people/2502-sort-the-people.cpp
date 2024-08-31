class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        for(int i=0;i<heights.size()-1;i++){
            for(int j=0;j<heights.size()-i-1;j++){
                if(heights[j]<heights[j+1]){
                    int temp=heights[j+1];
                    heights[j+1]=heights[j];
                    heights[j]=temp;
                    string tempp=names[j];
                    names[j]=names[j+1];
                    names[j+1]=tempp;
                }
            }
        }
            return names;  
    }
};