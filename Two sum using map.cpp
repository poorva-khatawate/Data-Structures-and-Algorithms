#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n; // Input size of the array
    
    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i]; // Input array elements
    }
    
    cout << "Enter the sum to be checked: ";
    int target;
    cin >> target; // Input the target sum
    
    unordered_map<int, int> m; // To store elements and their indices
    bool found = false;
    
    for (int i = 0; i < n; i++) {
        int num = a[i];
        int sum = target - num; // Complement needed to reach the target
        
        // Check if the complement exists in the map
        if (m.find(sum) != m.end()) {
            found = true;
            cout << "Pair found at indices: " << m[sum] << " and " << i << endl;
        }
        
        // Store the current element's index in the map
        m[num] = i;
    }
    
    if (!found) {
        cout << "Pair not found" << endl;
    }
    
    return 0;
}
// Input: n = 4, a = [8, 7, 2, 5], target = 10
// Output: Pair found at indices: 0 and 2