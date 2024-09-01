//convert string to decimal
#include <iostream>
#include <string>
#include <cmath>

//input "123"
//output 123
using namespace std;
int main(){
    string s;
    cin>>s;
    int num=0;
    int n=s.size();
    int p=1;
    for(int i=n-1;i>=0;i--){
        num=num+(s[i]-'0')*p;
        p=p*10;
    }
    cout<<num;
    return 0;
    
}