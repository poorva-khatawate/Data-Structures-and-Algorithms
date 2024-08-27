//Remove last set bit from rightmost
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    n=n&(n-1);
    cout<<n;
}
// Time Complexity: O(1)
// Space Complexity: O(1)
// Input: 5
// Output: 4