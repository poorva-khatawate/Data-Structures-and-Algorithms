//find duplicat in an array
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
    int slow=a[0];
    int fast=a[0];
    do{
        slow=a[slow];
        fast=a[a[fast]];
    }while(slow!=fast);
    fast=a[0];
    while(slow!=fast){
        slow=a[slow];
        fast=a[fast];
    }
    cout<<slow;
    return 0;
}