//input abcz
//output bcda
#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        s[i]=s[i]+1;
        if(s[i]>'z'){
            s[i]='a';
        }
    }
    cout<<s;
    return 0;
}