 class Solution {
public:
    int myAtoi(string s) {
        long long num = 0;
        int i = 0, sign = 1;

        while(i < s.size() && s[i] == ' ')
            i++;

        if(i < s.size() && (s[i] == '+' || s[i] == '-')) {
            if(s[i] == '-') sign = -1;
            i++;
        }

        while(i < s.size() && isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');

            if(sign * num > INT_MAX) return INT_MAX;
            if(sign * num < INT_MIN) return INT_MIN;

            i++;
        }

        return sign * num;
    }
};