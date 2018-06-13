//
//  main.c
//  Loops
//
//  Created by Christopher Clarke on 6/12/18.
//  Copyright © 2018 Christopher Clarke. All rights reserved.
//

#include <stdio.h>
#define SIZE 5

int main(int argc, const char * argv[]) {
    int numbers[SIZE] = {0};
    float size = 0;
    float average = 0;
    for (int i = 0; i < SIZE; i++) {
        printf("\nEnter an integer:");
        scanf("%i", &numbers[i]);
    }
    
    for (int i = 0; i < SIZE; i++) {
        size += numbers[i];
    }
    average = size / 5;
    printf("\nThe average is %.2f", average);
    
}
