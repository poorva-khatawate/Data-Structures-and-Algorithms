#include<iostream>
using namespace std;

int fibonacci(int N){
    if(N == 0)
    {
        return 0;
    }
    if(N == 1)
    {
       return 1;
    }
    int last = fibonacci(N-1);
    int slast = fibonacci(N-2);
    
    return last + slast;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fibonacci(i)<<" ";
    }
}