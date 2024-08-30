//Count unique paths from topleft to down right
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    double res=1;
    int N=m+n-2;
    int r=m-1;
    for(int i=1;i<=r;i++){
        res=res*(N-r+i)/i;
    }
    cout<<res;
    return 0;
}