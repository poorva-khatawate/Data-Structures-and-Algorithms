//Sort 1s 2s 0s in an array
//Time Complexity: O(n)
#include<iostream>
#include<algorithm>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int low=0,mid=0,high=n-1;
    while(mid<=high){
    if(a[mid]==0){
        swap(a[low],a[mid]);
        low++;
        mid++;
    }
    else if(a[mid]==1){
        mid++;
    }
    else{
        swap(a[mid],a[high]);
        high--;
    }}
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}