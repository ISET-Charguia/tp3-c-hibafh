/*
 ============================================================================
 Name        : EX6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include <stdio.h>
void main()
{
	int a,i,j,b,c,d,e ;

	printf("saisir a ");
	scanf("%d",&a);
	c=a;
	for(e=1;e<=c;e++)
	{
		printf(" ");
	}
printf("*");

b=1;
for(i=1;i<a;i++)
{
	b=b+2;
	printf("\n");
	c=c-1;
	for(d=1;d<=c;d++)

	{
		printf(" ");
	}
for(j=1;j<=b;j++)
{
printf("*");
}
}
}
