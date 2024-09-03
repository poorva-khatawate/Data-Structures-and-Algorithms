//roman to integer
//example input: IV
//output: 4

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int value(char c){
    if(c=='I'){
        return 1;
    }
    if(c=='V'){
        return 5;
    }
    if(c=='X'){
        return 10;
    }
    if(c=='L'){
        return 50;
    }
    if(c=='C'){
        return 100;
    }
    if(c=='D'){
        return 500;
    }
    if(c=='M'){
        return 1000;
    }
}

int main(){
    string s;
    cin>>s;
    int res=0;
    for(int i=0;i<s.size();i++)
    {
        char c=s[i];
        int s1=value(c);
        if(i+1<s.size()){
            int s2=value(s[i+1]);
            if(s1>=s2){
                res=res+s1;
            }
            else{
                res=res+s2-s1;
                i++;
            }
        }
        else{
            res=res+s1;
        }
    }
    cout<<res;
    return 0;
}