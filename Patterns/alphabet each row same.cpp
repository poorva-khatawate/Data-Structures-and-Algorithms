//input n 4
//output
/*
A
B B
C C C
D D D D
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char('A'+i)<<" ";
        }
        cout<<endl;
    }
}