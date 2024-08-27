//Pascals traingle
#include <iostream>
using namespace std;

int pascaltraingle(int n,int r){
    int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}

int main(){

    //variation of pascals triangle
    //variation 1: find the element at a given row and column
    int r,c;
    cin>>r>>c;
    int ele=pascaltraingle(r-1,c-1);
    cout<<ele<<endl;

    //variation 2: find the element at a given row
    for(int c=1;c<=r;c++){
        cout<<pascaltraingle(r-1,c-1)<<" ";
    }
    //variation 3: given row find the n rows of pascals triangle
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<pascaltraingle(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}