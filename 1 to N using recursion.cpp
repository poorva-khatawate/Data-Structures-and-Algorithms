//1 to N using recursion
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void fun(int i,int n){
    if(i<1){
        return;
    }
    fun(i-1,n);  
    cout<<i<<endl;
     
}

int main(){
    int n;
    cin>>n;
    fun(n,n);
    return 0;
}