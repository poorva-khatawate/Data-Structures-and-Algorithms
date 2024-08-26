//Decimal to Binary conversion
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int res,i=0;
    while(n!=0){

        res=n%2;
        if(res==1) {
            arr[i]=1;
            i++;
        }
        else{
            arr[i]=0;
            i++;
        }
        n=n/2;
    }
    reverse(arr,arr+i);
    for(int j=0;j<i;j++){
        cout<<arr[j];
    }
}