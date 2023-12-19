//
//  003.c
//  ProjectEuler
//
//  Created by Devjyot Singh on 19/12/2023.
//

#include "common.h"

int main(void) {

    const long double compositeNumber = 600851475143;
    
    for (long double i = 1; i < compositeNumber; i++) {
        int factors = 0;
        if (fmodl(compositeNumber, i) == 0) {
            for (long double j = 1; j <= i; j++) {
                // Check whether the factor is composite or prime
                if (fmodl(i, j) == 0) {
                    factors += 1;
                }
            }
            if (factors > 2) {
                // isComposite
            } else {
                printf("isPrime");
            }
            printf("%.0Lf\n", i);
        }
    }
}
