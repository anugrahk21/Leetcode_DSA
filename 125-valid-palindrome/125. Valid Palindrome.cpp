class Solution {
public:
    bool isPalindrome(string s) {
        string sr="";
        for (char c : s){
            if (isalnum(c)) {
                sr+=tolower(c);
            }
        }
        string ss=sr;
        reverse(ss.begin(), ss.end());
        if(ss==sr){
            return true;
        }
        return false;

    }
};