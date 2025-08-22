/*
 * Q4.c
 *
 *  Created on: Aug 22, 2025
 *      Author: LOQ
 */
#include <stdio.h>
int main(){
	float x , y , product;
	fflush(stdin); fflush(stdout);
	printf("Enter two numbers: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&x,&y);
	fflush(stdin); fflush(stdout);
	product = x*y;
	printf("Product = %f",product);
	return 0;
}
