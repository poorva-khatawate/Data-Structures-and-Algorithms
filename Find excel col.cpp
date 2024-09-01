#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    string ans = ""; // Initializing the empty string to store the result
    while (n > 0) {
        int rem = n % 26;
        if (rem == 0) {
            ans += 'Z';
            n = (n / 26) - 1;  // Update the value of n when remainder is 0
        } else {
            ans += (rem - 1) + 'A';
            n = n / 26;
        }
    }

    reverse(ans.begin(), ans.end()); // Reversing the string
    cout << ans << endl; // Output the result

    return 0;
}
