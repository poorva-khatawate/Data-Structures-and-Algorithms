//String concatenation using + operator
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    string s3=s1+s2;
    cout<<s3;
    //without + operator
    string s4=s1.append(s2);
    cout<<endl<<s4;
    return 0;
}
