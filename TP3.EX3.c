/*
 ============================================================================
 Name        : EX3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main() {
	int a, nbd, i;
	do {
		printf("donner un entier :");
		scanf("%d", &a);
	} while (a < 0);

	for (i = 2; i / a; i++) {
		if (i % a == 0)
			nbd++;

	}
	if (nbd == 2)
		printf("%d est premier,a");

	else
		printf("%d est non premier", a);
}
