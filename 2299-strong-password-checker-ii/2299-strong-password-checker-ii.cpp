class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if (password.size() < 8) {
            return false;
        }
        bool lower = false, upper = false, digit = false, special = false;
        string sp = "!@#$%^&*()-+";
        for (int i = 0; i < password.size(); i++) {
            char ch = password[i];
            if (i > 0 && password[i] == password[i - 1]) {
                return false;
            }
            if (islower(ch)) {
                lower = true;
            } else if (isupper(ch)) {
                upper = true;
            } else if (isdigit(ch)) {
                digit = true;
            } else if (sp.find(ch) != string::npos) {
                special = true;
            }
        }
        return lower && upper && digit && special;
    }
};