//check if two numbers are equal without using relational operators
 #include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    if(!(a^b)){
        cout<<"Equal";
    }
    else{
        cout<<"Not Equal";
    }
    return 0;
}