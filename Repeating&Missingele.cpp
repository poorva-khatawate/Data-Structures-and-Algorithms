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
    int freq[n+1]={0};
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    int missing=-1;
    int repeating=-1;
    for(int i=1;i<=n;i++){
        if(freq[i]==0){
            missing=i;
        }
        if(freq[i]>1){
            repeating=i;
        }
    }
    cout<<repeating<<" "<<missing;
    return 0;
}