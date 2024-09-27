#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float p,r,t,ci;
	clrscr();
	printf("Enter principal rate and time");
	scanf("%f %f %f",&p,&r,&t);
	r=r/100;
	ci=p*pow((1+(r/12)),12*t);
	printf("\n Compound intersest : %f",ci);

	getch();
	}
