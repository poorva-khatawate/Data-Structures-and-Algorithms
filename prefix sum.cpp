//find the prefix sum o array elements
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> prefix(n);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        prefix[i]=sum;
    }
    for(int i=0;i<n;i++){
        cout<<prefix[i]<<" ";
    }
    return 0;
}