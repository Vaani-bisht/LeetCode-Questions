class Solution {
public:
    int maxDepth(string s) {
        int maxLen = 0;
        int count = 0;
        for(int right = 0 ; right < s.length() ; right++){
            if(s[right] == '('){
                count++;
                maxLen = max(maxLen , count);
            }else if (s[right] == ')'){
                count--;
            }
        }
        return maxLen;
    }
};