class Solution {
public:
    string intToRoman(int num) {
        string roman="";
       vector<pair<int,string>>values={{1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}}; 
       for(auto pair:values){
        while(num>=pair.first){
        roman=roman+pair.second;
        num=num-pair.first;    
            }
       }
       return roman;
    }
};