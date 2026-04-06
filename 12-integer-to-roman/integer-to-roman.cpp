class Solution {
public:
    string intToRoman(int num) {
        map<int,string, greater<int>>m;
        string res = "";
        m[1000] = "M";
        m[900] = "CM"; 
        m[500] = "D"; 
        m[400] = "CD";
        m[100] = "C";
        m[90] = "XC";
        m[50] = "L";
        m[40] = "XL";
        m[10] = "X";
        m[9] = "IX";
        m[5] = "V";
        m[4] = "IV";
        m[1] = "I";
        
        for (const auto& val : m) {
            while (num >= val.first) {
                res += val.second;
                num -= val.first;
            }
        }

        return res;
    }
};