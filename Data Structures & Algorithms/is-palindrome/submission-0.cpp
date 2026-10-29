class Solution {
public:
    bool isPalindrome(string s) {
        int j = 0;
        int k = s.length() - 1;

        while (j < k) {
            while (j < k && !alphaNum(s[j])) {
                j++;
            }
            while (k > j && !alphaNum(s[k])) {
                k--;
            }
            if (tolower(s[j]) != tolower(s[k])) {
                return false;
            }
            j++;
            k--;
        }
        return true;
    }

    bool alphaNum(char c) {
        return (
            c >= 'A' && c <= 'Z' ||
            c >= 'a' && c <= 'z' ||
            c >= '0' && c <= '9'
        );
    }
};
