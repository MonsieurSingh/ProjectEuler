//
//  001.c
//  ProjectEuler
//
//  Created by Devjyot Singh on 19/12/2023.
//

#include "common.h"

void printMultiples (int n, int m1, int m2) {
    int i;
    int sum = 0;
    
    for (i = 1; i < n; i++) {
        if (i % m1 == 0 || i % m2 == 0) {
            sum += i;
        }
    }
    
    printf("%d\n", sum);
    
}

int main(void){
    
    int n;
    int m1;
    int m2;
    
    printf("Search for multiples upto: ");
    scanf("%d", &n);
    printf("Search for multiples of: ");
    scanf("%d", &m1);
    printf("AND: ");
    scanf("%d", &m2);
    
    printMultiples(n, m1, m2);
    
    return 0;
}
