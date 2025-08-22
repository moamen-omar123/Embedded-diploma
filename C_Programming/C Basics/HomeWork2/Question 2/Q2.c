/*
 * Q2.c
 *
 *  Created on: Aug 22, 2025
 *      Author: LOQ
 */
#include <stdio.h>
int main() {
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    char x;
    int isVowel = 0;   // flag
    printf("Enter an alphabet: ");
    fflush(stdout);
    scanf(" %c", &x);
    fflush(stdin);
    for (int i = 0; i < 5; i++) {
        if (x == vowels[i]) {
            isVowel = 1;
            break;
        }
    }
    if (isVowel){
        printf("%c is a vowel\n", x);
        fflush(stdout);
    }
    else{
        printf("%c is a consonant\n", x);
        fflush(stdin);
    }
    return 0;
}
