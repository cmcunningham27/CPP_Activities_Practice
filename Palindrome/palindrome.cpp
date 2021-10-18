#include <iostream>

// Check if string is palindrome (same forwards as backwards); return boolean
bool is_palindrome(std::string text) {
    bool palindrome = false;
    char backward, forward;

    // iterate through string backwards
    for (int i = (text.length() - 1); i > -1; i--) {
        backward = text[i];
    };

    return palindrome;
};

int main() {

    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("ada") << "\n"; 
    std::cout << is_palindrome("lovelace") << "\n";

};