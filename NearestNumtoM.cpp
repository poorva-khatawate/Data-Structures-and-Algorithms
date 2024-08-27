//Find the nearest number given a num divisible by m
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int res=n%m;
    if(res<(m+1)/2){
        cout<<n-res;
    }
    else{
        cout<<n+(m-res);
    }
    return 0;
}