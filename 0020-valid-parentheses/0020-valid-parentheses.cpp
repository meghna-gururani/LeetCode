class Solution {
public:
    bool isValid(string s) {
        stack<char>stack;
        for(int i=0;i<s.length();i++){
         char c=s[i];
         if(c=='(' || c=='{'|| c=='['){
            stack.push(c);
         }
         else{
           if(stack.empty()){
            return false;
         }
         char top=stack.top();
         if((c==')' && top=='(')|| (c=='}' && top=='{') || (c==']' && top=='[')){
            stack.pop();
         }
         else{
            return false;
         }
        }
        }
         return stack.empty();
    }
    
};