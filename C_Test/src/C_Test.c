/*
 ============================================================================
 Name        : C_Test.c
 Author      : JLM
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int calcApp(int a, int b) {
	int sum = a + b;
	return sum;
}

int main(void) {

	puts("Hello world of C!!!!!!!!!!!!");

	printf("Here is the sum of 12 + 987: %d", calcApp(12, 987));

	return EXIT_SUCCESS;
}
