//input n=4
//output
/*
A B C D
A B C
A B
A
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<'A'+n-i+1;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}