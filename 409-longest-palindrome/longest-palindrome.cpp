class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> lower(26, 0);
        vector<int> upper(26, 0);

        // Count frequencies
        for (char c : s) {
            if (c >= 'a' && c <= 'z') {
                lower[c - 'a']++;
            } else {
                upper[c - 'A']++;
            }
        }

        int count = 0;
        int odd = 0;

        // For lowercase
        for (int i = 0; i < 26; i++) {
            if (lower[i] % 2 == 0)
                count += lower[i];
            else {
                count += lower[i] - 1; // add even part
                odd = 1;
            }
        }

        // For uppercase
        for (int i = 0; i < 26; i++) {
            if (upper[i] % 2 == 0)
                count += upper[i];
            else {
                count += upper[i] - 1;
                odd = 1;
            }
        }

        return count + odd;  // add one odd center if exists
    }
};
