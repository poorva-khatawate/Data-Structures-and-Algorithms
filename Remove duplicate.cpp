//remove duplicate elements in an array
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int i=0;
    for(int j=1;j<n;j++){
        if(a[i]!=a[j]){
            i++;
            a[i]=a[j];
        }
    }
    for(int k=0;k<=i;k++){
        cout<<a[k]<<" ";
    }
    return 0;
}