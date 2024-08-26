//Binary  to Decimal conversion
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int res,sum=0,a=1;
    while(n!=0){
        res=n%10;
        sum=sum+res*a;
        a=a*2;
        n=n/10;
    }
    cout<<sum;
    return 0;
}