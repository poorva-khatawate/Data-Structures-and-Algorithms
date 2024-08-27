//rotate matrix by 90 degrees
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n][n];
    int b[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            b[j][n-i-1]=a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}