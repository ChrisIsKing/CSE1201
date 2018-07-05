//
//  main.c
//  Functions-2
//
//  Created by Christopher Clarke on 7/3/18.
//  Copyright © 2018 Christopher Clarke. All rights reserved.
//

#include <stdio.h>

void add_num(float, float, float*);
float sub_num(float, float);
float div_num(float, float);
float mul_num(float, float);

int main(int argc, const char * argv[]) {
    // insert code here...
    int operation;
    float num1, num2;
    float result;
    do {
        printf("Enter 0 - Addition, 1 - Multiplication, 2 - Subtraction, 3 - division:");
        scanf("%d", &operation);
    } while (operation < 0 && operation > 4);
    printf("Enter a number:");
    scanf("%f", &num1);
    printf("\nEnter another number:");
    scanf("%f", &num2);
    if (operation == 0) {
        add_num(num1, num2, &result);
    } else if (operation == 1) {
        mul_num(num1, num2);
    } else if (operation == 2) {
        sub_num(num1, num2);
    } else if (operation == 3) {
        div_num(num1, num2);
    }
    
    printf("The answer is %.2f\n", result);
    
    return 0;
}

void add_num(float num3, float num4, float* result) {
    *result = num3 + num4;
}

float sub_num(float num1, float num2) {
    return num1 - num2;
}

float mul_num(float num1, float num2) {
    return num1 * num2;
}

float div_num(float num1, float num2) {
    return num1 / num2;
}
