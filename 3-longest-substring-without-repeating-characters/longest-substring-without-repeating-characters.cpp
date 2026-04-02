class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //Sliding Window find window with most unique characters
        std::unordered_set<char> charSet;
        int i = 0, res = 0;

        for (int j = 0; j < s.length(); j++) {
            //if char is in the set, move window over and empty charset
            while(charSet.find(s[j]) != charSet.end()) {
                charSet.erase(s[i]);
                i++;
            }

            //add unique chars as we see them
            charSet.insert(s[j]);
            res = max(res, j-i+1);
        }
        return res;
    }
};