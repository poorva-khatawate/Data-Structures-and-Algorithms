//encrpyt string 
//input aaabbbcc
//output 3a3b2c
#include <iostream>
#include <string>
using namespace std;



int main(){
    string s;
    cin>>s;
    int n=s.size();
    int count=0;
    char ch=s[0];
    int i=0;
    string res="";
    while(i<=n){
        if(ch==s[i]){
            count++;
            i++;
        }
        else{
            res=res+ch+to_string(count);
            count=1;
            ch=s[i];
            i++;
        }

    }
    cout<<res;
    return 0;
}