/*
 ============================================================================
 Name        : EX4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int main() {
	int n, i, a;
	for (i = 1; i < 1000; i++) {
		n = 0;
		for (a = 1; a < i; a++) {
			if (i % a == 0)
				n = n + a;
		}
		if (n == i)
			printf("%d  est parfait ", i);

	}

}
