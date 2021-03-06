#include <iostream>
#include <string>
#include <vector>

int main() {
    // initialize input with string we want to convert into whale talk
    // whales speak with vowels only. E's and u's are longer so need to be doubled
    std::string input = "turpentine and turtles";

    // REALIZED HAD TO USE SINGLE QUOTES FOR CHAR; "" FOR STRING TYPES
    // vector of vowels to check if string characters are vowels or not
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    // where we will store the vowels from the string
    std::vector<char> results;

    // loop through input string
    for (int i = 0; i < input.length(); i++) {
        // loop through vowels vector
        for (int j = 0; j < vowels.size(); j++) {
            // check if string character matches any of the characters in vowels
            if (input[i] == vowels[j]) {
                // if they match add character to the back of results vector
                results.push_back(input[i]);
                // check if the character is an e or u
                if (input[i] == 'e' || input[i] == 'u') {
                    // if it is push it to back of results again
                    results.push_back(input[i]);
                };
            };
        };
    };

    // output the whale talk from results
    for (int l = 0; l < results.size(); l++) {
        std::cout << results[l];
    };

    return 0;
};