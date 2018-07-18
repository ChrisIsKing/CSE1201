//
//  main.c
//  Count
//
//  Created by Christopher Clarke on 7/17/18.
//  Copyright © 2018 Christopher Clarke. All rights reserved.
//

#include <stdio.h>

int count(double array[], int amount, double value);

int main(int argc, const char * argv[]) {
    // insert code here...
    double array[] = {1,4646,4673,584,865};
    int result = count(array, 5, 20);
    printf("%i values are greater than 20", result);
    return 0;
}

int count(double array[], int amount, double value) {
    int counter = 0;
    for (int i = 0; i < amount; i++) {
        if (array[i] > value) {
            counter++;
        }
    }
    return counter;
}
