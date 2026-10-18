class Solution {
public:
    bool isPalindrome(string s) {
        string noSpaces;
        for (int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] <= 'Z' && s[i] >= 'A' || s[i] >= '0' && s[i] <= '9') noSpaces += s[i];
        }

        int i = 0;
        int j = noSpaces.length() - 1;
        while (i < j) {
            if (noSpaces[i] != noSpaces[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};
//Time: O(logn)
//Space: O(logn)