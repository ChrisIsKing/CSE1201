//
//  main.c
//  File
//
//  Created by Christopher Clarke on 7/17/18.
//  Copyright © 2018 Christopher Clarke. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    FILE* ptr = fopen("numbers.txt", "r");
    if (ptr == NULL) {
        printf("File not found");
    }
    int value;
    fread(&value, sizeof(int), 1, ptr);
    // insert code here...
    printf("%i\n", value);
    return 0;
}
