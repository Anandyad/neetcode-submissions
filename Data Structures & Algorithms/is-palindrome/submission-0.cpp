class Solution {
public:
    bool isPalindrome(string s) {
        int i =0;
        int j = s.size()-1;
        while(i<j){
            // skip left invalid chars
            while(i < j && !isalnum(s[i])) {
                i++;
            }

            // skip right invalid chars
            while(i < j && !isalnum(s[j])) {
                j--;
            }

            if(tolower(s[i]) != tolower(s[j])){
               return false;
            }
             i++;
                j--;
        }
        return true;
    }
};
