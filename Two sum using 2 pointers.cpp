//two sum using 2 pointers
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
    int target;
    cin>>target;
    sort(a.begin(),a.end());
    int left=0;
    int right=n-1;
    while(left<right){
        if(a[left]+a[right]==target){
            cout<<a[left]<<" "<<a[right]<<endl;
            left++;
            right--;
        }
        else if(a[left]+a[right]<target){
            left++;
        }
        else{
            right--;
        }
    }
    return 0;
}