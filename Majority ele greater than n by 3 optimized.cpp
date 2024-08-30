//Find the majority element in an array where majority element occurs more than n/3 times
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> ans;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(auto i:mp){
        if(i.second>(n/3)){
            ans.push_back(i.first);
        }
        if(ans.size()==2){
            break;
        }
    }
    if(ans.size()==0){
        cout<<"No majority element";
    }
    else{
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }

    return 0;
}