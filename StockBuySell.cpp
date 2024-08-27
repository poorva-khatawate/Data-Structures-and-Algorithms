//Stock Buy Sell to Maximize Profit
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxprofit=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i]){
                maxprofit=max(maxprofit,a[j]-a[i]);
            }
        }
    }
    cout<<maxprofit<<endl;
    return 0;
}