/*
 * Q3.c
 *
 *  Created on: Aug 22, 2025
 *      Author: LOQ
 */
# include <stdio.h>
int main(){
	float a , b , c;
	printf("Enter three numbers : \n");
	fflush(stdout);
	scanf("%f %f %f", &a, &b, &c);
	fflush(stdin);
	if(a>b){
		if(a>c){
			printf(" %f is the largest number",a);
			fflush(stdout);
		}
		else if (c>a){
			printf(" %f is the largest number",c);
			fflush(stdout);
		}
	}
	else if (b>a){
		if(b>c){
			printf(" %f is the largest number",b);
			fflush(stdout);
		}
		else if (c>b){
			printf(" %f is the largest number",c);
			fflush(stdout);
		}
	}
	return 0 ;
}
