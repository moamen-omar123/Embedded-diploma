/*
 * A2.c
 *
 *  Created on: Aug 27, 2025
 *      Author: LOQ
 */
#include <stdio.h>
int main(){
	float arr[100];
	int n;
	float sum = 0;
	printf("Enter the number of data: \n");
	fflush(stdout);
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		printf("Enter a number: ");
		fflush(stdout);
		scanf("%f", &arr[i]);
		fflush(stdin);
		sum +=arr[i];
	}
	float average = sum/n;
	printf("Average equals %f",average);
	fflush(stdout);
	return 0;
}

