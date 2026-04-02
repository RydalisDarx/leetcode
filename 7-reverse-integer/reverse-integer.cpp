class Solution {
public:
    int reverse(int x) {
        int res = 0;
        //take every value and add it to the end of the rest, multiply by 10 to get to the next place
        while (x != 0) {
            int digit = x % 10;
            if (res > INT_MAX/10 || res < INT_MIN/10) return 0;
            res = res*10 + digit;
            x /= 10;
        }
        return res;
    }
};