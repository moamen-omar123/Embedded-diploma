/*
 * A3.c
 *
 *  Created on: Aug 27, 2025
 *      Author: LOQ
 */
#include <stdio.h>
int main(){
	int arr1[100][100];
	int arr2[100][100];
	int r,c;
	printf("Enter rows & columns: \n");
	fflush(stdout);
	scanf("%d%d",&r,&c);
	fflush(stdin);
	for(int i=0;i<r;i++){
		for(int j = 0;j<c;j++){
			printf("Enter a%d%d ",i+1,j+1);
			fflush(stdout);
			scanf("%d",&arr1[i][j]);
			fflush(stdin);
		}
	}
	printf("Entered Matrix: \n");
	fflush(stdout);
	for(int i=0;i<r;i++){
		for(int j = 0;j<c;j++){
			printf("%4d",arr1[i][j]);
			fflush(stdout);
			arr2[j][i]=arr1[i][j];
		}
		printf("\n");
		fflush(stdout);
	}
	printf("Transposed Matrix: \n");
	fflush(stdout);
	for(int i=0;i<c;i++){
		for(int j = 0;j<r;j++){
			printf("%4d",arr2[i][j]);
			fflush(stdout);
		}
		printf("\n");
		fflush(stdout);
	}
}

