//Length of longest subarray with sum zero
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    unordered_map<int,int> m;
    int sum=0;
    int len=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(sum==0){
            len=i+1;
        }
        else{
            if(m.find(sum)!=m.end()){
                len=max(len,i-m[sum]);
            }
            else{
                m[sum]=i;
            }
        }
    }
    cout<<len;
    return 0;
}