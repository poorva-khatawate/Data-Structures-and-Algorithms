//given a number n set the ith bit of n
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i;
    cin>>i;
    n=n|(1<<i);
    cout<<n;
}
// Time Complexity: O(1)
// Space Complexity: O(1)
// Input: 5 1
// Output: 7