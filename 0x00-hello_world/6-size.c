#!/bin/bash
#include <stdio.h>
/*
 *main = entry point
 *return: always 0 (success)
 */
int main(void) {
	int intType;
	char charType;
	long longType;
	long long long_longType;
	float floatType;
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of char: %zu byte(s)\n", sizeof(charType));
       printf("Size of long: %zu byte(s)\n", sizeof(longType));
       printf("Size of long long: %zu byte(s)\n", sizeof(long_longType));
       printf("Size of float: %zu byte(s)\n", sizeof(floatType));
       return (0);
}

