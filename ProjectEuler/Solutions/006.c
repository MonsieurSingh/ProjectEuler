//
//  006.c
//  ProjectEuler
//
//  Created by Devjyot Singh on 19/12/2023.
//

#include "common.h"

void summer(int lowerL, int upperL, int *sum) {
    for (int i = lowerL; i <= upperL; i++) {
        *sum += i;
    }
}

void squareSummer(int lowerL, int upperL, int *sum) {
    for (int i = lowerL; i <= upperL; i++) {
        int j = i;
        j *= j;
        *sum += j;
    }
}

int main(void) {
    int sumN = 0;
    int squareSum = 0;
    int lowerLimit = 0;
    int upperLimit = 100;
    
    summer(lowerLimit, upperLimit, &sumN);
    int sumSquared = sumN * sumN;
    squareSummer(lowerLimit, upperLimit, &squareSum);
    
    int differenceOfSquares = sumSquared - squareSum;
    
    printf("Sum: %d\n", sumN);
    printf("Square of the sum: %d\n", sumSquared);
    printf("Sum of Squares: %d\n", squareSum);
    printf("Difference: %d\n", differenceOfSquares);
}
