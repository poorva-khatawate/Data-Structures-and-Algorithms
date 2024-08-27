//Count the number of set bits in a number
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt=0;
    while(n!=0){
        if(n%2==1){
            cnt++;
            
        }
        n=n/2;
    }
    cout<<cnt;
    return 0;
}
// Time Complexity: O(log(n))
// Space Complexity: O(1)
// Input: 5
// Output: 2

//or
/*
while(n!=0){
    n=n&(n-1);
    cnt++;
}
*/