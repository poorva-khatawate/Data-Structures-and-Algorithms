//Find max sum in an array
//Kadane's Algorithm
//Time Complexity: O(n)
//Space Complexity: O(1)
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int maxi=INT_MIN;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum>maxi)
        {
            maxi=sum;
        }
        if(sum<0)
        {
            sum=0;
    }}
    cout<<maxi<<endl;
    return 0;
    }

    //Input: 8
    //       -2 -3 4 -1 -2 1 5 -3
    //Output: 7
