//Check if a number is prime or not
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=2;i<sqrt(n);i++){
        if(n%i==0){
            cout<<"Not Prime";
            return 0;
        }
    }
    cout<<"Prime";
    return 0;
}