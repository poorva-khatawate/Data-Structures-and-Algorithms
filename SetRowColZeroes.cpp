//Set the rows and cols to zero in a matrix
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n];
    int row[m],col[n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            if(a[i][j]==0){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(row[i]==1 || col[j]==1){
                a[i][j]=0;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
