//Count the subarrays with given XOR k
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
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        int xor1=0;
        for(int j=i;j<n;j++){
            xor1=xor1^a[j];
            if(xor1==k){
                cnt++;
            }
        }

    }
    cout<<cnt;
    return 0;
}