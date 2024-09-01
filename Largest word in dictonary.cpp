//find the largest word in the dictionary
//input dict=["ale","apple","monkey","plea"]
//str = "abpcplea"
//output apple

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int isSubquence(string s,string str){
    int i=0;
    int j=0;
    while(i<s.size() && j<str.size()){
        if(s[i]==str[j]){
            i++;
            j++;
        }
        else
        {
            i++;
        }

    }
    if(j==str.size()){
        return 1;
    }
    return 0;
}

int main(){
    vector<string> dict={"ale","apple","monkey","plea"};
    string str="abpcplea";

    string max_string="";
    int max_len=0;

    for(int i=0;i<dict.size();i++){
        string s=dict[i];
        if(isSubquence(str,s)){
            if(s.size()>max_len){
                max_len=s.size();
                max_string=s;
            }
        }
    }
    cout<<max_string;
    return 0;
}
