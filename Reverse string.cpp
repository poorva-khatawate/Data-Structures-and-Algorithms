//reverse a string
#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int main(){
    string str;
    cin>>str;
    string str2;
    str2=str;
    //using inbuilt function
    reverse(str.begin(),str.end());
    cout<<str;
    
    cout<<endl;
    //two pointer approach
    for(int i=0,j=str2.size()-1;i<j;i++,j--){
        swap(str2[i],str2[j]);
    }
    cout<<str;
}