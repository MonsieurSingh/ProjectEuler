//
//  002.c
//  ProjectEuler
//
//  Created by Devjyot Singh on 19/12/2023.
//

#include "common.h"

void generateFibonacci (unsigned long limit, unsigned long **arr, unsigned long *size);
void evenFibonacci(unsigned long **evenArr, unsigned long **arr, unsigned long *size);

int main(void){
    
    unsigned long limit;
    unsigned long sum = 0;
    
    printf("Search for Fibonacci numbers upto: ");
    scanf("%lu", &limit);
    
    unsigned long *fibonacciSequence = NULL;
    unsigned long *evenFibonacciSequence = NULL;
    unsigned long size;
    
    generateFibonacci(limit, &fibonacciSequence, &size);
    
    printf("Fibonacci Numbers less than %lu:\n", limit);
    for (unsigned long i = 0; i < size; ++i) {
        printf("%lu, ", *(fibonacciSequence + i));
    }
    printf("\n");
    
    evenFibonacci(&evenFibonacciSequence, &fibonacciSequence, &size);
        
    printf("Even Fibonacci Numbers less than %lu:\n", limit);
    for (unsigned long i = 0; i < size; ++i) {
        printf("%lu, ", *(evenFibonacciSequence + i));
    }
    printf("\n");
    
    printf("Sum of even Fibonacci Numbers less than %lu:\n", limit);
    for (unsigned long i = 0; i < size; ++i) {
        sum += *(evenFibonacciSequence + i);
    }
    printf("%lu, ", sum);
    printf("\n");
    
    free(fibonacciSequence);
    free(evenFibonacciSequence);
    
    return 0;
}

void generateFibonacci (unsigned long limit, unsigned long **arr, unsigned long *size) {
    unsigned long a = 0, b = 1, next, index = 0;
    
    unsigned long *tempArr = NULL;
    
    *arr = (unsigned long *)malloc(sizeof(unsigned long));
    
    while (b < limit) {
        tempArr = (unsigned long *)realloc(*arr, (index + 1) * sizeof(unsigned long));
            if (tempArr == NULL) {

                fprintf(stderr, "Memory reallocation failed.\n");
                exit(EXIT_FAILURE);
            }
        
        *arr = tempArr;
        
        (*arr)[index] = b;
        index++;

        next = a + b;
        a = b;
        b = next;
    }
    
    *size = index;
}

void evenFibonacci (unsigned long **evenArr, unsigned long **arr, unsigned long *size) {
    
    unsigned long *tempArr = NULL;
    unsigned long evenIndex = 0;

    for (unsigned long index = 0; index < *size; index++) {
        if ((*arr)[index] % 2 == 0) {
            tempArr = (unsigned long *)realloc(tempArr, (evenIndex + 1) * sizeof(unsigned long));
            if (tempArr == NULL) {
                fprintf(stderr, "Memory reallocation failed.\n");
                exit(EXIT_FAILURE);
            }

            tempArr[evenIndex] = (*arr)[index];
            evenIndex++;
        }
    }

    // Assign the new array and update the size
    *evenArr = tempArr;
    *size = evenIndex;

}
