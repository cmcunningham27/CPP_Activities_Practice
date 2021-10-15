#include <iostream>
#include <string>
#include <vector>

int main() {
    // initialize input with string we want to convert into whale talk
    // whales speak with vowels only. E's and u's are longer so need to be doubled
    std::string input = "turpentine and turtles";
    // vector of vowels to check if string characters are vowels or not
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    // where we will store the vowels from the string
    std::vector<char> results;

    // loop through input string
    for (int i = 0; i < input.length(); i++) {
        // loop through vowels vector
        for (int j = 0; j < vowels.size(); j++) {

        }
    }

    return 0;
};