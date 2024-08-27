//get the next lexicographical order of the string
#include <iostream>
#include <algorithm>
using namespace std;
int main(){

    string s;
    cin>>s;
    if(next_permutation(s.begin(),s.end())){
        cout<<s<<endl;
    }else{
        cout<<"No next lexicographical order"<<endl;
    }

    //without using inbuilt function
    int n=s.length();
    int ind=-1;
    for(int i=n-2;i>=0;i--){
        if(s[i]<s[i+1]){
            ind=i;
            break;
        }
    }
    if(ind==-1){
        cout<<"No next lexicographical order"<<endl;
        return 0;
    }
    for(int i=n-1;i>ind;i--){
        if(s[i]>s[ind]){
            swap(s[i],s[ind]);
            break;
        }
    }
    reverse(s.begin()+ind+1,s.end());
    cout<<s<<endl;

    return 0;
}