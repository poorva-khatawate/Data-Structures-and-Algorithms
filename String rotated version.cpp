//check if a string is a rotated version of another left or right

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1.length()!=s2.length()){
        cout<<"No";
        return 0;
    }
    for(int i=0;i<s1.size();i++){
        if(s2[i]!=s1[(i+2)%s1.size()]){
            left=0;
            break;
            
        }

    }
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[(i+2)%s1.size()]){
            right=0;
            break;
        }
    }
    if(left||right){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}