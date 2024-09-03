//text: abcdef
//pattern: de
//output: 3

#include <iostream>
#include <string>
using namespace std;
int main(){
    string text,pattern;
    cin>>text>>pattern;

    for(int i=0;i<text.size();i++){
        if(text.substr(i,pattern.size())==pattern){
            cout<<i;
            break;
        }
    }
    return 0;
}