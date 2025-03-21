class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {     
        vector<string> answer;
        unordered_set<string> supplySet(supplies.begin(), supplies.end());
        bool added = true;

        while (added) {
            added = false;
            for (int i = 0; i < recipes.size(); i++) {
                if (supplySet.count(recipes[i])) continue;
                
                int count = 0;
                for (int j = 0; j < ingredients[i].size(); j++) {
                    if (supplySet.count(ingredients[i][j])) {
                        count++;
                    }
                }

                if (count == ingredients[i].size()) {
                    answer.push_back(recipes[i]);
                    supplySet.insert(recipes[i]);
                    added = true;
                }
            }
        }
        
        return answer;
    }
};
