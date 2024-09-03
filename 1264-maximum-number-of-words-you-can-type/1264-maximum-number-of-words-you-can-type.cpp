class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        bool broken[26]={false};
        for(int i=0;i<brokenLetters.size();i++){
            broken[brokenLetters[i]-'a']=true;
        }
        int count=0;
        stringstream ss(text);
        string word;
        while(ss>>word){
            bool cantype=true;
            for(int i=0;i<word.size();i++){
                if(broken[(word[i])-'a']){
                    cantype=false;
                    break;
                }
            }
            if(cantype){
                count++;
            }
        }
        return count;
    }
};