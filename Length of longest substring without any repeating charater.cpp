//Length of longest substring without any repeating character
#include <iostream>
#include <vector>
#include <climits>
#include <string>
#include <set>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    
    int maxlen=INT_MIN;
    for(int i=0;i<n;i++){
        set<char> st;
        for(int j=i;j<n;j++){
            if(st.find(s[j])!=st.end()){
                 maxlen=max(maxlen,j-i);
                    break;
            }
            st.insert(s[j]);
           
        }
    }
    cout<<maxlen;
    return 0;
}