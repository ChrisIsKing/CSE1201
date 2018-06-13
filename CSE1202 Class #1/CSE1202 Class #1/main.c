//
//  main.c
//  CSE1202 Class #1
//
//  Created by Christopher Clarke on 6/5/18.
//  Copyright © 2018 Christopher Clarke. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int x, y, total;
    printf("Enter a number: ");
    scanf("%i",&x);
    printf("\nEnter another number:");
    scanf("%i", &y);
    total = x + y;
    printf("\nYour total is %i", total);
    return 0;
}
