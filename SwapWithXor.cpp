//swap two numbers without using third variable using XOR operator
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<a<<" "<<b;
}