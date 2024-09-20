//find the length of the longest substring without any repeating characters.
//eg: "abcabcbb" -> "abc" -> 3
#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    int maxlen = 0;  // Start maxlen with 0 instead of INT_MIN
    for (int i = 0; i < n; i++) {
        set<char> st;
        for (int j = i; j < n; j++) {
            if (st.find(s[j]) != st.end()) {
                maxlen = max(maxlen, j - i);  // Update maxlen if repeat found
                break;
            }
            st.insert(s[j]);
        }
        // Update maxlen in case the loop completes without finding a repeat
        maxlen = max(maxlen, static_cast<int>(st.size()));
    }

    cout << maxlen << endl;
    return 0;
}
