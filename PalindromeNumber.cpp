// Description: This program will check if a number is a palindrome or not.

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num=n;
    int sum=0;
    int digit;
    while(n!=0){
        digit=n%10;
        sum=sum*10+digit;
        n=n/10;
    }
    if(num==sum){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
}