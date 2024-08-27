//Maximum Subarray Sum
//Given an array of integers, find the maximum sum of a subarray of the array.
//A subarray is a contiguous part of an array.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cs=a[0];
    int ms=a[0];
    for(int i=1;i<n;i++){
        cs=cs+a[i];
        if(cs>ms){
            ms=cs;
        }
        if(cs<0){
            cs=0;
        }
    }
    cout<<ms;
    return 0;
}