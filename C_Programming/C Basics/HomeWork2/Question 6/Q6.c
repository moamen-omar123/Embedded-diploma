/*
 * Q6.c
 *
 *  Created on: Aug 22, 2025
 *      Author: LOQ
 */
#include <stdio.h>
int main(){
	int x,sum ;
	printf("Enter a number : ");
	fflush(stdout);
	scanf(" %d" ,&x);
	fflush(stdin);
	for (int i = 0; i<=x;i++){
		sum +=i;
	}
	printf("sum = %d",sum);
	return 0;
}
