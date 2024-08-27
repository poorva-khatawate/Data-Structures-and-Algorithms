//Put all zeroes to end of array without changing the order of non-zero elements
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            a[j]=a[i];
            j++;
        }
        else{
            count++;
        }
    }
    while(count--){
        a[j]=0;
        j++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}