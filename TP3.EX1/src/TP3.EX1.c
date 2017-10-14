/*
 ============================================================================
 Name        : EX1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>


int main() {
	int i,e,f;
	printf("saisir un entier positif \n");
	scanf ("%d",&e);

	while (e<0);
	{ f=1;
		i=1;
	}


	while(i<=e)
		{
		f=f*i;
		i++;
		}
	printf("la factoriel de %d est %d",e,f);

return 0;
}
