/*
 ============================================================================
 Name        : EX5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include<stdio.h>
int main() {
	int a, b, i, j;
	do {
		printf("donner la largeur  et la hauteur");
		scanf("%d %d", &a, &b);

	} while (a < 0 && b < 0);
	for (i = 1; i <= b; i++) {
		printf("\n");
		for (j = 1; j <= a; j++) {
			printf("*");
		}
	}
}
