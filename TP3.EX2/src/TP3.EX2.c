/*
 ============================================================================
 Name        : EX2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main()
{
	int a,b,r,e;
	do
	{
	printf("saisir a et b\n");
	scanf("%d %d",&a,&b);
	}while(a<b)	;
r=a%b;
while(r!=0)
{

	e=a;
	a=b;
	b=r;
	r=a%b;
}
printf("le PGCD = %d",b);
}
