#include<stdio.h>
int main(){
      int a=12;
      int b = 14;
      printf("Before swapping : a:%d b:%d",a,b);
      a=a+b;
      b=a-b;
      a=a-b;
      printf("\n After swapping : a:%d b:%d ",a,b);
    return 0;
}