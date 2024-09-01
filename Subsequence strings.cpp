//subquence strings: a string is a subsequence of another string if it can be obtained by deleting some characters of the other string without changing the order of the remaining characters
//eg: "abc" is a subsequence of "abedc"
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;

    int i=0,j=0;
    int n=s1.size(),m=s2.size();

    while(i<n&&j<m){
        if(s1[i]==s2[j]){
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    if(j==m){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}