/*
 * Q7.c
 *
 *  Created on: Aug 22, 2025
 *      Author: LOQ
 */
#include <stdio.h>

int main() {
    float a, b;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf(" %f",&a);
	fflush(stdin);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf(" %f",&b);
	fflush(stdin);
    a = a + b;  // step 1
    b = a - b;
    a = a - b;
    printf("After swapping, value of a = %f\n",a);
    fflush(stdout);
    printf("After swapping, value of b = %f\n",b);
    fflush(stdout);;
    return 0;
}


