class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        };
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        //sorting makes strings equal if they are anagram.
        return s == t;
    }
};