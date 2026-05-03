class Solution {
   public:
    bool isPalindrome(string s) {
        string newStr = "";
        for (char x : s) {
            if (isalnum(x)) {
                newStr += tolower(x);
            }
        }
        return newStr == string(newStr.rbegin(), newStr.rend());
    }
};
