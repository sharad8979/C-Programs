#include<iostream>
using namespace std;
int main(){

   int a=0,b=1,c,n;
   cout<<"Enter number of terms:";
   cin>>n;
   cout<<"Fibonacci series:\n";
   cout<<a<<b;
   for(int i=2;i<n;i++){
    c=a+b;
    cout<<c;
    a=b;
    b=c;

   }

    return 0;
}