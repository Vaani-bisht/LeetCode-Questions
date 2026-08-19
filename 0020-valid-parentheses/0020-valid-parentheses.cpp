#include<stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char>brackets;

        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                brackets.push(s[i]);
            }else{
                if(brackets.empty()){
                    return false;
                }

                if(s[i] == ')' && brackets.top() == '(' ||
                    s[i] == ']' && brackets.top() == '[' ||
                    s[i] == '}' && brackets.top() == '{'){
                        brackets.pop();
                }

                else{
                    return false;
                }
            }
        }
        return brackets.empty();
    }
};