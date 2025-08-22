/*
 * Q4.c
 *
 *  Created on: Aug 22, 2025
 *      Author: LOQ
 */
#include <stdio.h>
int main(){
	float x;
	printf("Enter a number :");
	fflush(stdout);
	scanf(" %f",&x);
	fflush(stdin);
	if(x>0){
		printf(" %f is positive",x);
		fflush(stdout);
	}
	else if (x == 0 ){
		printf("You entered zero");
		fflush(stdout);
	}
	else {
		printf(" %f is negative",x);
		fflush(stdout);
	}
}

