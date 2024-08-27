//Check if a bit is set or not
#include <iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n>>i;
    if((n&(1<<i))!=0){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
// Time Complexity: O(1)
// Space Complexity: O(1)
// Input: 5 2
// Output: yes