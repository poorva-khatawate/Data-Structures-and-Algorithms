#include <iostream>
using namespace std;

int main() {
    int n = 3; // You can change this value to generate the pattern for a different n
    
    // Outer loop to manage rows
    for (int i = n; i >= 1; i--) {
        // Inner loop to print decreasing values from n to 1
        for (int j = n; j >= 1; j--) {
            // Print each number 'i' times in each row
            for (int k = 0; k < i; k++) {
                cout << j;
            }
        }
        cout << endl; // Move to the next line after printing each row
    }
    
    return 0;
}
