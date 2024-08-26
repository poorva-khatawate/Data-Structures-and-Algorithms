// Description: This program will reverse the digits of a number.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    int digit;
    while(n!=0){
        digit=n%10;
        sum=sum*10+digit;
        n=n/10;
    }
    cout<<sum;
}