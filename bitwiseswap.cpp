#include<iostream>
using namespace std;
int main(){
     int a=10,b=5;
      cout<<"Before swap:"<<a<<" "<<b;
      a=a^b;
      b=a^b;
      a=a^b;
      cout<<"\nAfter swap:"<<a<<" "<<b;
    return 0;
}