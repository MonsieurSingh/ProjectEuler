//
//  007.c
//  ProjectEuler
//
//  Created by Devjyot Singh on 21/12/2023.
//

#include "common.h"

#define LIMIT 1000000

int main(void) {
    // Initialize an array to mark whether numbers are prime
    bool isPrime[LIMIT + 1];
    for (int i = 0; i <= LIMIT; i++) {
        isPrime[i] = true;
    }

    // Apply the Sieve of Eratosthenes algorithm
    for (int i = 2; i * i <= LIMIT; i++) {
        if (isPrime[i]) {
            printf("Prime number found: %d\n", i);
            for (int j = i * i; j <= LIMIT; j += i) {
                if (isPrime[j] == false) {
                    continue;
                  }
                isPrime[j] = false;
//                printf("\tMarking multiple as non-prime: %d\n", j);
            }
        }
    }

    // Print the 10001st prime number
    int primeCount = 0;
    for (int i = 2; i <= LIMIT; i++) {
        if (isPrime[i]) {
            primeCount++;
            if (primeCount == 10001) {
                printf("Prime no. %d: %d\n", primeCount, i);
                break;
            }
        }
    }

    return 0;
}
