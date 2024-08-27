//get max sum along with subarray
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int start;
    int anstart=-1,anend=-1;
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        if(i==0){
            start=i;
        }
        sum+=a[i];
        if(sum>maxi){
            maxi=sum;
            anstart=start;
            anend=i;
        }
        if(sum<0){
            sum=0;
            start=i+1;
        }
    }
    cout<<maxi<<endl;
    for(int i=anstart;i<=anend;i++){
        cout<<a[i]<<" ";
    }
}
//Input: 8
//-2 -3 4 -1 -2 1 5 -3
//Output: 7
//4 -1 -2 1 5
//Time Complexity: O(n)