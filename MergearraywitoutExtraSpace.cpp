//merge two arrays withs same size without using extra space
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
    int left=n-1;
    int right=0;
    while(left>0 && right<m){
        if(a[left]>b[right]){
            swap(a[left],b[right]);
            left--;
            right++;
        }
        else{
            break;
        }
    }
    sort(a,a+n);
    sort(b,b+m);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
    }
    return 0;
}