/*
 ============================================================================
 Name        : EX7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
int main() {
	int a, b, c, i, e;

	do {
		printf("donner un entier");
		scanf("%d", &a);
	} while (a < 0);
	i = 1;
	e = 0;
	do

	{
		b = a % 2;
		c = b * i;
		e = e + c;
		i = i * 10;

		a = a / 2;
	} while (a != 0);
	printf("%d", e);

}
