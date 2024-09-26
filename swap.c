#include<stdio.h>
int main(){
      int temp;
      int a=12;
      int b = 14;
      printf("Before swapping : a:%d b:%d",a,b);
      temp=a;
      a=b;
      b=temp;
      printf("\n After swapping : a:%d b:%d ",a,b);
    return 0;
}