//Counts of Digits in a number
#include <iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    int cnt=0;
    while(num!=0){
        num/=10;
        cnt++;
    }
    cout<<cnt;
}