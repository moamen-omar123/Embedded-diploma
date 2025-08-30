/*
 * A4.c
 *
 *  Created on: Aug 30, 2025
 *      Author: LOQ
 */
#include <stdio.h>
int main(){
	int arr [100];
	int no,loc,x;
	printf("Enter no of elements: \n");
	fflush(stdout);
	scanf("%d",&no);
	fflush(stdin);
	printf("Enter elements: \n");
	fflush(stdout);
	for(int i = 0;i<no;i++){
		scanf("%d",&arr[i]);
		fflush(stdin);
	}
	printf("Enter element to be inserted: \n");
	fflush(stdout);
	scanf("%d",&x);
	fflush(stdin);
	printf("Enter location: \n");
	fflush(stdout);
	scanf("%d",&loc);
	fflush(stdin);
	for(int i=no;i>=loc;i--)
		arr[i]=arr[i-1];
	no++;
	arr[loc-1]=x;
	for(int i=0;i<no;i++){
		printf("%d",arr[i]);
		fflush(stdout);
	}
	return 0 ;
}

