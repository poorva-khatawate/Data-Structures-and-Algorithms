//Check if a string is substring of another
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    char *p=strstr(s1.c_str(),s2.c_str());
    if(p){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}