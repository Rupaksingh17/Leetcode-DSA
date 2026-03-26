 class Solution {
public:
    vector<int> buildLPS(string pat) {
        int n = pat.length();
        vector<int> lps(n, 0);

        int len = 0;
        int i = 1;

        while(i < n){
            if(pat[i] == pat[len]){
                len++;
                lps[i] = len;
                i++;
            }
            else{
                if(len != 0){
                    len = lps[len - 1];
                }
                else{
                    lps[i] = 0;
                    i++;
                }
            }
        }
        return lps;
    }

    int strStr(string haystack, string needle) {
        if(needle == "") return 0;

        vector<int> lps = buildLPS(needle);

        int i = 0, j = 0;

        while(i < haystack.length()){
            if(haystack[i] == needle[j]){
                i++;
                j++;
            }

            if(j == needle.length()){
                return i - j;
            }

            else if(i < haystack.length() && haystack[i] != needle[j]){
                if(j != 0){
                    j = lps[j - 1];
                }
                else{
                    i++;
                }
            }
        }

        return -1;
    }
};