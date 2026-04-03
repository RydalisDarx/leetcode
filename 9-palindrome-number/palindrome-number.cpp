class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        int k = 0;

        //we take the beginning digits of x and put it into k
        //we are attempting to meet them in the middle and see if they are the same value
        //essentially trying to take 1221 and make both x and k = 12 to show its a palendrome
        //in situations like 121, we settle for x = 1 and k = 12 since it would still be a palendrome
        while (k < x) {
            k = k*10 + x%10;
            x /= 10;
        }
        return x == k || x == k/10;

        /*
        string version code

        string val = to_string(x);
        
        for(int i = 0, j = val.length()-1; i < j; i++, j--) {
            if (val[i] != val[j]) {
                return false;
            }
        }

        return true;
        */
    }
};