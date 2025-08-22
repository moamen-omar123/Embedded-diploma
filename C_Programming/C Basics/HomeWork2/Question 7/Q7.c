/*
 * Q7.c
 *
 *  Created on: Aug 22, 2025
 *      Author: LOQ
 */
#include <stdio.h>
int main(){
	int x;
	int factorial = 1 ;
	printf("Enter a number : ");
	fflush(stdout);
	scanf(" %d" ,&x);
	fflush(stdin);
	if(x<0){
		printf("!!!Error factorial of negative number does not exist");
		fflush(stdout);
	}
	else if (x == 0 || x == 1){
		factorial = 1;
		printf("Factorial = %d",factorial);
	}
	else{
		for (int i = 1; i<=x;i++){
			factorial *=i;
		}
		printf("factorial = %d",factorial);
	}
}
