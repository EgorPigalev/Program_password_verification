#include <string>
#include <cctype>
using namespace std;

bool validatePassword(const string* password) {
    if (password == nullptr) {
        return false;
    }
    if (password->length() < 8) {
        return false;
    }
    bool hasDigit = false;
    bool hasUpper = false;
    for (int i = 0; i < password->length(); ++i) {
        char ch = (*password)[i];
        if (ch == ' ') {
            return false;
        }
        if (isdigit(ch)) {
            hasDigit = true;
        }
        if (isupper(ch)) {
            hasUpper = true;
        }
    }
    bool result = false;
    if (hasDigit) {
        if (hasUpper) {
            result = true;
        }
    }
    return result;
}