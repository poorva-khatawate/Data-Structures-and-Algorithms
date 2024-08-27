// Description: Sort an array of 0s, 1s and 2s
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt0=0,cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            cnt0++;
        }else if(a[i]==1){
            cnt1++;
        }else{
            cnt2++;
        }
    }
    for(int i=0;i<cnt0;i++){
        a[i]=0;
    }
    for(int i=cnt0;i<cnt0+cnt1;i++){
        a[i]=1;
    }
    for(int i=cnt0+cnt1;i<n;i++){
        a[i]=2;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}