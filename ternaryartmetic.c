#include <stdio.h>

int main() {
    char opr;
    int a=10,b=5,r;



    printf("Enter an arithmetic operator  ");
    scanf(" %c", &opr);

    r = (opr == '+') ? (a+b) :
             (opr == '-') ? (a - b) :
             (opr == '*') ? (a * b) :
             (opr == '/') ? (a/b) : (opr =='%') ? (a%b) : 0;

     if(r!=0){
        printf("result =%d",r);
     }
     else{
        printf("Invalid input");
     }
    return 0;
}
