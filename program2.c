#include<stdio.h>
int main()
{
	char c;
	int a,b;
	printf("Enter the opertion sign which you want to perform(+,-,*,/,%)=");
	scanf("%c",&c);
	printf("Enter two values for perform the operation:");
	scanf("%d %d",&a,&b);
	
	switch(c){
		case '+' : 
		            printf("Sum : %d ",a+b);
		            break;
     	case '-' : 
		            printf("Sum : %d ",a-b);
		            break;

       case '*' : 
		            printf("Sum : %d ",a*b);
		            break;

       case '/' : 
		            printf("Sum : %d ",a/b);
		            break;

    case '%' : 
		            printf("Sum : %d ",a%b);
		            break;

	default : 
	              printf("Wrong choice");
	              
	
	}
	return 0;
}
