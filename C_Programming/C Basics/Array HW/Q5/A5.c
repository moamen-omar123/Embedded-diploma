/*
 * A5.c
 *
 *  Created on: Aug 30, 2025
 *      Author: LOQ
 */
#include <stdio.h>

int main() {
    int arr[30];
    int no, x;
    int choice = 0;
    printf("Enter no of elements: \n");
    fflush(stdout);
    scanf("%d", &no);
    printf("Enter elements: \n");
    fflush(stdout);
    for (int i = 0; i < no; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to be searched: ");
    fflush(stdout);
    scanf("%d", &x);
    for (int i = 0; i < no; i++) {
        if (arr[i] == x) {
            printf("Number found at location %d\n", i + 1);
            choice = 1;  // mark as found
            break;
        }
    }
    if (choice == 0) {
        printf("Number not found\n");
    }
    return 0;
}
