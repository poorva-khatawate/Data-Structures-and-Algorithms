//input n 4
//output
/*
*
* *
* * *
* * * *
* * * *
* * *
* *
*
*/

#include <iostream>
using namespace std;

void upper(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void lower(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    upper(n);
    lower(n);
    return 0;
}