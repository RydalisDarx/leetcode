class Solution {
public:
    string convert(string s, int numRows) {
        if (s.length() == numRows) return s;
        if (numRows == 1) return s;
        vector<string> substrings = {};
        string res = "";
        for(int i = 0; i < numRows; i++) {
            substrings.push_back("");
        }

        int direction = 1;
        for(int i = 0, rows = 0; i < s.length(); i++) {
            substrings[rows] += s[i];
            std::cout << substrings[rows] << endl;
            if ((rows == numRows-1 && direction == 1) || (rows == 0 && direction == -1)) direction*=-1;
            rows+=direction;
        }

        for (string str : substrings) {
            res += str;
        }
        return res;
    }
};