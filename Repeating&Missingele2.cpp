//Find the missing and repeating element in an array of N integers
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
    
    for(int i=1;i<n;i++){
        int cnt=0;
        for(int j=0;j<n;j++){
            if(a[j]==i){
                cnt++;
            }
        }if(cnt==0){
            cout<<"Missing element: "<<i<<endl;
        }
        if(cnt>1){
            cout<<"Repeating element: "<<i<<endl;
        }
    
    }
    return 0;
}