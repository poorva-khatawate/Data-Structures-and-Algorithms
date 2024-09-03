//check if the given string has balanced parenthesis or not
#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;

    stack<char> st;

    for(auto it:s){
        if(it=='(' || it=='{' || it=='['){
            st.push(it);
        }
        else {
            if(st.empty()){
                cout<<"Not balanced";
                return 0;
            }
            char ch=st.top();
            st.pop();
            if(it==')' && ch=='(' || it=='}' && ch=='{' || it==']' && ch=='['){
                continue;
            }
            else{
                cout<<"Not balanced";
                return 0;
            }
        }
    }
    if(st.empty()){
        cout<<"Balanced";
    }
    else{
        cout<<"Not balanced";
    }
    return 0;
}