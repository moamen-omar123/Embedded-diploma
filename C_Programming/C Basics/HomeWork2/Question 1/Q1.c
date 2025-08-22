/*
 * Q1.c
 *
 *  Created on: Aug 22, 2025
 *      Author: LOQ
 */
#include <stdio.h>
int main(){
	int x;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);
	if (x%2 == 0){
		printf("%d is even",x);
		fflush(stdout);
	}
	else{
		printf("%d is odd",x);
		fflush(stdout);
	}
}
