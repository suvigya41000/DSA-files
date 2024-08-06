#include <iostream>
#include <string>
using namespace std;
string findLongestSubstring(const string &str) {
    if (str.empty()) {
        return "";
    }

    char currentChar = str[0];
    int currentLength = 1;
    char maxChar = str[0];
    int maxLength = 1;

    for (int i = 1; i < str.length(); ++i) {
        if (str[i] == currentChar) {
            currentLength++;
        } else {
            currentChar = str[i];
            currentLength = 1;
        }

        if (currentLength > maxLength) {
            maxLength = currentLength;
            maxChar = currentChar;
        }
    }

    return string(maxLength, maxChar);
}

int main() {
    string input;

    cout << "Enter a string: ";
    cin >> input;

    string longestSubstring = findLongestSubstring(input);

    if (longestSubstring.empty()) {
        cout << "No substring found (input string is empty)." << endl;
    } else {
        cout << "Longest substring with the same elements: " << longestSubstring << endl;
    }

    return 0;
}
