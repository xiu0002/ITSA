#include <iostream>
#include <cstring>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s); 

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ',' || s[i] == '.') {
            s[i] = ' ';
        }
    }

    int freq[26];
    memset(freq, 0, sizeof(freq));

    int wordCount = 0;
    string word;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') { 
            if (word.length() > 0) { 
                wordCount++;
                for (int j = 0; j < word.length(); j++) {
                    if (word[j] >= 'a' && word[j] <= 'z') { 
                        freq[word[j] - 'a']++;
                    }
                }
            }
            word = ""; 
        }
        else { 
            word += tolower(s[i]);
        }
    }

    if (word.length() > 0) {
        wordCount++;
        for (int j = 0; j < word.length(); j++) {
            if (word[j] >= 'a' && word[j] <= 'z') {
                freq[word[j] - 'a']++;
            }
        }
    }

    cout << wordCount << endl;
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << (char)(i + 'a') << " : " << freq[i] << endl;
        }
    }

    return 0;
}
