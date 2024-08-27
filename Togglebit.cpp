//Toggle bit in a number
#include <iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n>>i;
    n=n^(1<<i);
    cout<<n;
}
// Time Complexity: O(1)
// Space Complexity: O(1)
// Input: 5 1
// Output: 7