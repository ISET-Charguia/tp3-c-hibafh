/*
 ============================================================================
 Name        : 2EMEMETHODE.c
 Author      : hiba farhat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include<stdio.h>
void main()
{
int e,f,i;
do
{	printf("sasir un entier positif \n");
     scanf("%d",&e);
}while(e<0);
f=1;
i=1;
for(;i<=e;i++)
	{
	f=f*i;

	}
printf("%d est la factoriel de %d",f,e);


}

