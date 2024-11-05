#include<iostream>
using namespace std;
int main(){
    int n,c=0;
    cout<<"Enter number";
    cin>>n;
    if(n<=0){
        cout<<"Negative or zero number ";
    }else if(n==1){
        cout<<"Exact power of 2 is 0";
    }else{
        if(n&(n-1)){
            cout<<n<<"is not exact power of 2";
        }else{
            while(n>1){
                n=n>>1;
                c++;
            }
            cout<<"This number is exact power of 2"<<endl;
            cout<<"Power is:"<<c<<endl;
        }
    }

    return 0;
}