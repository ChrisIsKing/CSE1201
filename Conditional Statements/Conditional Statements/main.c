//
//  main.c
//  Conditional Statements
//
//  Created by Christopher Clarke on 6/7/18.
//  Copyright © 2018 Christopher Clarke. All rights reserved.
//

#include <stdio.h>

int main() {
    int n;
    // TODO: fix the bug!
    printf("Enter a year: ");
    scanf("%i", &n);
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0) {
        // Print yes I am a leap year
    } else {
        // print no I am not a leap year
    }
    

}
