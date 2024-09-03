//count the max no of consecutive 1's in a binary string
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    int maxcount=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            count++;
        }
        else{
            count=0;
        }
        maxcount=max(maxcount,count);
    }
    cout<<maxcount;
    return 0;
}