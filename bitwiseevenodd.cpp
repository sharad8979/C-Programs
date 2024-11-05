#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number";
    cin>>n;
    if(n&1){
        cout<<"Odd";
    }else{
        cout<<"Even";
    }
}