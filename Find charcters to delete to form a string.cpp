//find charcters to delete to form a string to another string return its characters and index
//input abpcplea
//apple

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    map<char,int> m;
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size();
    int m1=s2.size();
    int i=0,j=0;
    while(i<n&&j<m1){
        if(s1[i]==s2[j]){
            i++;
            j++;
        }
        else{
            m[s1[i]]++;
            i++;
        }
    }
    while(i<n){
        m[s1[i]]++;
        i++;
    }
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}