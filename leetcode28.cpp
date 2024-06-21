class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        int i, j;

        for (i = 0; i < n; i++) {
            
            for (j = 0; j < m; j++) {
                if (haystack[i+j] != needle[j]) {
                    break;
                }
                if (j == m-1) {
                    return i;
                }
            }
        }

        return -1;
    }
};