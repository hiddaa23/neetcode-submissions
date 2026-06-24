class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
    int r = s.length() - 1;

    for (int i = 0; i < s.length(); ++i) {
        s.at(i) = tolower(s.at(i));
    }

    while (l < r) {
        while (l < r && !isalnum(s.at(l))) {
            ++l;
        }
        while (r > l && !isalnum(s.at(r))) {
            --r;
        }
        if (s.at(l) != s.at(r)) {
            return false;
        }
        ++l;
        --r;
    }
    return true;
    }
};
