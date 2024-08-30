//Moore voting alogorithm : to find the majority ele greater than n/3 times
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
    int cnt1=0,cnt2=0;
    int el1=INT_MIN;
    int el2=INT_MIN;
    for(int i=0;i<n;i++){
        if(cnt1==0 && a[i]!=el2){
            cnt1=1;
            el1=a[i];
        }
        else if(cnt2==0 && a[i]!=el1){
            cnt2=1;
            el2=a[i];
        }
        else if(a[i]==el1){
            cnt1++;
        }
        else if(a[i]==el2){
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }
    int mini=(n/3)+1;
    for(int i=0;i<n;i++){
        if(a[i]==el1){
            cnt1++;
        }
        else if(a[i]==el2){
            cnt2++;
        }
    }
    if(cnt1>=mini){
        cout<<el1<<" ";
    }
    if(cnt2>=mini){
        cout<<el2<<" ";
    }
    if(cnt1<mini && cnt2<mini){
        cout<<"No majority element";
    }
    return 0;
}