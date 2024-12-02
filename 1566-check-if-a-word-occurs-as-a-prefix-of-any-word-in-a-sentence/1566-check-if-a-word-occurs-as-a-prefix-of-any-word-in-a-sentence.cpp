class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int count=1;
        sentence+=" ";
        string word="";
        for(int i=0;i<sentence.length();i++){
           if(sentence[i]!=' '){
             word+=sentence[i];
           }
           else{
            int j;
             for(j=0;j<searchWord.length();j++){
                if(searchWord[j]!=word[j])
                   break;
             }
             if(j==searchWord.length())
                return count;
            word="";
            count++;
           }
        }
        return -1;
    }
};