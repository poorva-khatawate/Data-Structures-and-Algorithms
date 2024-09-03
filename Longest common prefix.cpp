//find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".
// Example 1:
// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:
// Input: strs = ["dog","racecar","car"]
// Output: ""

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

    vector<string> strs={"flower","flow","flight"};
    string ans="";
    if(strs.size()==0){
        cout<<ans;
        return 0;
    }
    int len=strs[0].length();
    ans=strs[0];
    for(int i=0;i<strs.size();i++){
        while(strs[i].find(ans)!=0){
            ans=ans.substr(0,ans.length()-1);
            len--;
        }
        if(ans==""){
            cout<<ans;
            return 0;
        }
    }
    cout<<ans;
    return 0;
}