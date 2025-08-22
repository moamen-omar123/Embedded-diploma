/*
 * Q5.c
 *
 *  Created on: Aug 22, 2025
 *      Author: LOQ
 */
#include <stdio.h>

int main() {
    char ch;
    printf("Enter any character: ");
    fflush(stdout);
    scanf(" %c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("%c is an alphabet.\n", ch);
    }
    else {
        printf("%c is not an alphabet.\n", ch);
    }
    return 0;
}


