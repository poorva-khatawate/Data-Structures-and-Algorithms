// find the majority element in an array greater than N/2 times
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(auto it:mp){
        if(it.second >(n/2)){
            cout<<it.first;
            return 0;
        }
    }
    cout<<"No majority element";
    return 0;
}