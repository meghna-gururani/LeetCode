class Solution {
public:
    string numberToWords(int num) {

        map<int,string>ones={{0,"Zero"},{1,"One"},{2, "Two"}, {3, "Three"}, {4, "Four"}, {5, "Five"}, {6, "Six"}, {7, "Seven"},
        {8, "Eight"}, {9, "Nine"}, {10, "Ten"}, {11, "Eleven"}, {12, "Twelve"}, {13, "Thirteen"}, {14, "Fourteen"},
        {15, "Fifteen"}, {16, "Sixteen"}, {17, "Seventeen"}, {18, "Eighteen"}, {19, "Nineteen"}};

    vector<string>tens={"","Ten","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

    if (num < 20) {
        return ones[num];
    } else if (num < 100) {
        return tens[num / 10] + (num % 10 ? " " + numberToWords(num % 10) : "");
    } else if (num < 1000) {
        return ones[num / 100] + " Hundred" + (num % 100 ? " " + numberToWords(num % 100) : "");
    } else if (num < 1000000) {
        return numberToWords(num / 1000) + " Thousand" + (num % 1000 ? " " + numberToWords(num % 1000) : "");
    } else if (num < 1000000000) {
        return numberToWords(num / 1000000) + " Million" + (num % 1000000 ? " " + numberToWords(num % 1000000) : "");
    } else if (num < 1000000000000) {
        return numberToWords(num / 1000000000) + " Billion" + (num % 1000000000 ? " " + numberToWords(num % 1000000000) : "");  
    }
    return "";
    }

};