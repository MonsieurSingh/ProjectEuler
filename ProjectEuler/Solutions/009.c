//
//  009.c
//  ProjectEuler
//
//  Created by Devjyot Singh on 26/12/2023.
//

#include "common.h"

int main (void) {
    for (int a = 2; a < 1000; a++) {
        for (int b = 2; b < 1000; b++) {
            int c = 1000 - a - b;
            if ((a * a) + (b * b) == (c * c) && (a + b + c == 1000)) {
                printf("%d^2 + %d^2 = %d^2\n", a, b, c);
                printf("Prodcut: %d\n", a*b*c);
                return 0;
            }
        }
    }
}
