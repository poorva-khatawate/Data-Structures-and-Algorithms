/*
Given a number n, print n x n rows and columns of the following pattern.
n= 3
* * *
* * *
* * *
*/

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}