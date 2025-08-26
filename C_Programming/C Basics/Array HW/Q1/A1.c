/*
 * A1.c
 *
 *  Created on: Aug 27, 2025
 *      Author: LOQ
 */
#include <stdio.h>
int main(){
	float arr1 [2][2];
	float arr2 [2][2];
	float arr3 [2][2];
	printf("Enter elements of 1st matrix\n");
	fflush(stdout);
	for(int i =0;i<2;i++){
		for(int j = 0;j<2;j++){
			printf("Enter a%d%d ",i+1,j+1);
			fflush(stdout);
			scanf("%f",&arr1[i][j]);
			fflush(stdin);
		}
	}
	printf("Enter elements of 2nd matrix \n");
		fflush(stdout);
		for(int i =0;i<2;i++){
			for(int j = 0;j<2;j++){
				printf("Enter b%d%d ",i+1,j+1);
				fflush(stdout);
				scanf("%f",&arr2[i][j]);
				fflush(stdin);
			}
		}
		for(int i =0;i<2;i++){
			for(int j = 0;j<2;j++){
				arr3[i][j] = arr1[i][j] + arr2[i][j];
			}
		}
		printf("Sum of Matrix\n");
		for (int i = 0; i < 2; i++) {
		    for (int j = 0; j < 2; j++) {
		        printf("%6.2f ", arr3[i][j]);
		    }
		    printf("\n");
		}

		return 0;
}

