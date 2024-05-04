class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        vector<string>star;
        vector<string>dest;
        for(int i=0;i<paths.size();i++){
            star.push_back(paths[i][0]);
            dest.push_back(paths[i][1]);
        }

        for(int i=0;i<star.size();i++){
            for(int j=0;j<dest.size();j++){
                if (star[i] == dest[j]) {
                dest.erase(dest.begin() + j);
                break; 
            }
        }  
        }
        return dest[0];
    }
};