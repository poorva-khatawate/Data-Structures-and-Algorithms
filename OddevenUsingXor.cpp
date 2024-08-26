//The idea is to check whether the last bit of the number is set or not. If the last bit is set then the number is odd, otherwise even. 
//As we know bitwise XOR Operation of the Number by 1 increment the value of the number by 1 if the number is even otherwise it decrements the value of the number by 1 if the value is odd.

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if((n^1)==(n+1)){
        cout<<"Even";
    }
    else{
        cout<<"Odd";
    }
    return 0;
}