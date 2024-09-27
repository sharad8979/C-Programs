#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a,b;
printf("Enter Two numbers : " );
scanf("%d %d ", &a , &b);
if(a>b){
 printf("%d is greatest",a);
}
else {
       printf("%d is greatest",b);
}

getch();
}