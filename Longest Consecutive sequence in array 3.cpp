//find the longest consecutive sequence in an array
#include <iostream>
#include <vector>
#include<unordered_set>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    int ans=0;
    for(auto it:s){
        if(s.find(it-1)==s.end()){
            int cnt=1;
            int ele=it;
            while(s.find(ele+1)!=s.end()){
                cnt++;
                ele++;
            }
            ans=max(ans,cnt);
        }
    }   
    cout<<ans;
    return 0;

}