//anagram strings: two strings are anagrams if they have same characters but in different order
//eg: "listen" and "silent" are anagrams

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    int count[26]={0};

    for(int i=0;i<s1.size();i++){
        count[s1[i]='a']++;
    }
    for(int i=0;i<s2.size();i++){
        count[s2[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(count[i]!=0){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}