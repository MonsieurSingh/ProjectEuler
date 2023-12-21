//
//  005.c
//  ProjectEuler
//
//  Created by Devjyot Singh on 20/12/2023.
//

#include "common.h"

#define MAX_K 20

int main(void) {
    int primes[MAX_K + 1]; // array to store prime numbers
    int a[MAX_K + 1];      // array to store the powers of prime factors
    int k = MAX_K;

    // Initialize primes array with prime numbers up to k
    for (int i = 1; i <= k; i++) {
        primes[i] = i;
        a[i] = 0;
    }

    // Update the powers of prime factors
    for (int j = 2; j <= k; j++) {
        int num = j;
        for (int i = 2; i <= j; i++) {
            int count = 0;
            while (num % primes[i] == 0) {
                num /= primes[i];
                count++;
            }
            a[i] = (count > a[i]) ? count : a[i];

        }
    }

    long long result = 1;
    for (int i = 2; i <= k; i++) {
        while (a[i] > 0) {
            result *= primes[i];
            a[i]--;
        }
    }

    printf("The smallest number divisible by each of the numbers 1 to %d is: %lld\n", k, result);

    return 0;
}
