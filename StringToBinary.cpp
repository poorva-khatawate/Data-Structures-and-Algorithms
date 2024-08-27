#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main() {
    string s;
    cin >> s;
    string res = "";
    
    for (int i = 0; i < s.length(); i++) {
        // Convert each character to its binary representation
        bitset<8> bin(s[i]);
        res += bin.to_string();
    }
    
    cout << res;
    return 0;
}
