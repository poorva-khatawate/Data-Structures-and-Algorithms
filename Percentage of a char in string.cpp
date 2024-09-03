//string helloo , char o, percentage of l in helloo = 40%

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    char c;
    cin>>c;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==c){
            count++;
        }
    }
    cout<<(count*100)/s.size();
    return 0;
}