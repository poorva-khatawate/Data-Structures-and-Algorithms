//Merge two arrays with space
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int c[n+m];
    int left=0,right=0;
    int index=0;
    while(left<n && right<m){
        if(a[left]<b[right]){
            c[index]=a[left];
            left++;
        }
        else{
            c[index]=b[right];
            right++;
        }
        index++;
    }
    while(left<n){
        c[index]=a[left];
        left++;
        index++;
    }
    while(right<m){
        c[index]=b[right];
        right++;
        index++;
    }
    for(int i=0;i<n+m;i++){
        cout<<c[i]<<" ";
    }
    return 0;
}