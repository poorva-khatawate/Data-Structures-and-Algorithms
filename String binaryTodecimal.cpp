//convert string to decimal
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string s;
    cin>>s;
    int num=0;
    int n=s.size();
    int p2=1;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
            num=num+p2;
        }
        p2*=2;
    }
    cout<<num;
    return 0;
    
}
// Time Complexity: O(n)
// Space Complexity: O(1)
// Input: 101
// Output: 5