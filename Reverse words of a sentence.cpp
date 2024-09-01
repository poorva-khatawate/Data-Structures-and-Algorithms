#include<iostream>
#include<string>
#include<stack>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stack<string> st;
    string word="";
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            st.push(word);
            word="";
        }
        else{
            word+=s[i];
        }
    }
    st.push(word);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}