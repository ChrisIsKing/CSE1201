//
//  main.c
//  Letter
//
//  Created by Christopher Clarke on 6/19/18.
//  Copyright © 2018 Christopher Clarke. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    char letter;
    printf("Enter a letter:");
    scanf("%c", &letter);
    if (letter <= 'z' && letter >= 'a' )
    { // If lowercase
        printf("You entered a lowercase letter\n");
    } else if (letter >= 'A' && letter <= 'Z')
    { // If uppercase
        printf("You entered a uppercase letter\n");
    } else
    {
        printf("You entered an incorrect character\n");
    }
    return 0;
}
