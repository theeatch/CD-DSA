// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

//An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.


class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s.size()!=t.size()) return false;
        for(int i=0;s[i]!='\0';i++){
            if(s[i]!=t[i])return false;
        }
        return true;
    }
};