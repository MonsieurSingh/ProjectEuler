//
//  004.c
//  ProjectEuler
//
//  Created by Devjyot Singh on 20/12/2023.
//

#include "common.h"

int isPalindrome(int number) {
    
    int originalNumber = number;
    int reverseNumber = 0;
    
    while (number > 0) {
        int digit = number % 10;
        reverseNumber = reverseNumber * 10 + digit;
        number /= 10;
    }
    
    return originalNumber == reverseNumber;
}

int main(void) {

    int multiplicand = 0;
    int multiplier = 0;
    int product = multiplicand * multiplier;
    int number = 1991;
    
    isPalindrome(number);
    
    for (int i = 1; i < 1000; i++) {
        for (int j = 1; j < 1000; j++) {
            if (isPalindrome(i * j)) {
                if (i * j > product) {
                    product = i * j;
                    multiplicand = i;
                    multiplier = j;
                }
            }
        }
    }
    printf("%d x %d = %d\n", multiplicand, multiplier, product);
    

}
