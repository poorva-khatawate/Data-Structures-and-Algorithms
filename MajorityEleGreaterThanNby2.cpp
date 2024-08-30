// find the majority element in an array greater than N/2 times
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
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                cnt++;
            }
        }
        if(cnt>n/2){
            cout<<a[i];
            return 0;
        }
    }
    cout<<"No majority element";
    return 0;
}