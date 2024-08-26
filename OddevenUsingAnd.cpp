//The idea is to check whether the last bit of the number is set or not. If last bit is set then the number is odd, otherwise even.
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n&1){
        cout<<"Odd";
    }
    else{
        cout<<"Even";
    }
    return 0;
}