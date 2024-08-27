//Stock by buy and sell 
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int maxprofit=INT_MIN;
    int minprofit=INT_MAX;
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        minprofit=min(minprofit,a[i]);
        maxprofit=max(maxprofit,a[i]-minprofit);
    }
    cout<<maxprofit<<endl;
    return 0;
}