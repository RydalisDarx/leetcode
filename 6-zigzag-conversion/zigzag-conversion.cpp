class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows <= 1) return s;
        string res;
        vector<string> substr(numRows, "");

        int line = 0, direction = -1;
        for(int i = 0, rows = 0; i < s.length(); i++) {
            if (line == 0 || line == numRows - 1) direction *= -1;
            substr[line] += s[i];
            line+=direction;
        }

        for (string str : substr) {
            res += str;
        }
        return res;
    }
};