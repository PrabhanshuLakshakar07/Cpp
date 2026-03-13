#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool seen[26] = {false};

    for (int i = 0; i < s.length(); i++) {
        if (!seen[s[i] - 'a']) {
            cout << s[i];
            seen[s[i] - 'a'] = true;
        }
    }

    return 0;
}