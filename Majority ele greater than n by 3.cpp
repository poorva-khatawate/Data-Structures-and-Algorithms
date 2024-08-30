//Find the majority element in an array where majority element occurs more than n/3 times
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> ans;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                cnt++;
            }
        }
        if(cnt>(n/3)){
            ans.push_back(a[i]);
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