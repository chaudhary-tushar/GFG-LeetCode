#include <iostream>
#include <string>
#include <vector>
#include<math.h>
using namespace std;

const int prime = 101;

vector<int> rabinKarp(string text, string pattern) {
    vector<int> matches;

    int n = text.length();
    int m = pattern.length();
    int patternHash = 0; // Hash value of the pattern
    int textHash = 0;    // Hash value of the current text window

    // Calculate the hash value of the pattern and the initial window
    for (int i = 0; i < m; i++) {
        patternHash += pattern[i] * pow(prime, i);
        textHash += text[i] * pow(prime, i);
    }

    // Slide the window through the text
    for (int i = 0; i <= n - m; i++) {
        // If the hash values match, check character by character
        if (patternHash == textHash) {
            bool match = true;
            for (int j = 0; j < m; j++) {
                if (text[i + j] != pattern[j]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                matches.push_back(i); // Store the index of the match
            }
        }

        // Calculate the hash value of the next window
        if (i < n - m) {
            textHash = (prime * (textHash - text[i] * pow(prime, 0))) + text[i + m];
        }
    }

    return matches;
}

int main() {
    string text = "ABABDABACDABABCABAB";
    string pattern = "ABABCABAB";
    vector<int> matches = rabinKarp(text, pattern);

    if (matches.empty()) {
        cout << "Pattern not found!" << endl;
    } else {
        cout << "Pattern found at indices: ";
        for (int i : matches) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
