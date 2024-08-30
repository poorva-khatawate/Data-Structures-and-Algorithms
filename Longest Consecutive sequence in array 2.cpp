#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;  // Input size of the array
    
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Input array elements
    }
    
    if (n == 0) {
        cout << "The array is empty." << endl;
        return 0;
    }
    
    sort(arr.begin(), arr.end());  // Sort the array
    int longest = 1;  // To track the longest consecutive sequence
    int cnt = 1;  // To count the current sequence length
    int lastele = arr[0];  // Initialize the last element to the first element
    
    for (int i = 1; i < n; i++) {
        if (arr[i] == lastele + 1) {  // Check if current element is consecutive
            cnt++;  // Increment count for consecutive elements
        } else if (arr[i] != lastele) {  // Reset count if not consecutive (ignore duplicates)
            cnt = 1;  // Reset count for new sequence
        }
        lastele = arr[i];  // Update last element
        longest = max(longest, cnt);  // Update longest if current count is greater
    }
    
    cout << "The length of the longest consecutive sequence is: " << longest << endl;
    return 0;
}
