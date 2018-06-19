//
//  main.c
//  functions
//
//  Created by Christopher Clarke on 6/14/18.
//  Copyright © 2018 Christopher Clarke. All rights reserved.
//

#include <stdio.h>

void swap(void);

int x, y; // Global variables


int main(int argc, const char * argv[]) {
    x = 1;
    y = 2;
    swap();
    printf("x is %i\n", x);
    printf("y is %i\n", y);
}

void swap()
{
    int tmp = x;
    x = y;
    y = tmp;
}
