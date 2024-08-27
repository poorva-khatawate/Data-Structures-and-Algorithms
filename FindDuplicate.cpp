//Find duplicate in an array of N+1 integers

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        if(a[i]==a[i+1]){
            cout<<a[i];
            break;
        }
    }
    return 0;
}