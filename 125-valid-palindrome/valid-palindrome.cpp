 class Solution {
public:
    bool isPalindrome(string s) {
        string clean = "";
for(int i = 0; i < s.length(); i++){
            if(isalnum(s[i])){
                clean += tolower(s[i]);
            }
        }
string rev = "";
for(int i = clean.length()-1; i >= 0; i--){
            rev += clean[i];
        }
if(clean == rev){
            return true;
        }
        else{
            return false;
        }
    }
};