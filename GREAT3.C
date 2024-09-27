#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a,b,c;
printf("Enter Three numbers : " );
scanf("%d %d %d", &a , &b,&c);
if(a>b && a>c){
 printf("%d is greatest",a);
}
else if(b>c)
{
       printf("%d is greatest",b);
}
else if (a ==b && b==c){
   printf("All numbers are equal");
}
else{
    printf("%d is greatest",c);
}

getch();
}