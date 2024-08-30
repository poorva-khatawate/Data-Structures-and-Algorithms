//Check if a pair with given sum exists in an array
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
    cout<<"Enter the sum to be checked"<<endl;
    int target;
    cin>>target;
    vector<int> ans;
    bool found=false;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                found=true;
                ans.push_back(a[i]);  //if indices then push_back(i) and push_back(j)
                ans.push_back(a[j]);
                break;
            }
        }
    }
    if(found){
        cout<<"Pair found"<<endl;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
    else{
        cout<<"Pair not found";
    }
    return 0;
}