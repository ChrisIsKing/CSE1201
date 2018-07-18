//
//  main.c
//  Duplicates
//
//  Created by Christopher Clarke on 7/17/18.
//  Copyright © 2018 Christopher Clarke. All rights reserved.
//

#include <stdio.h>
int find_duplicates(int array[], int amount, int search_value);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    int array[] = {4,51,4,7,7,1};
    int result = find_duplicates(array, 6, 4);
    if (result == 1) {
        printf("You have more than 2 duplicates");
    }
    return 0;
}

int find_duplicates(int array[], int amount, int search_value)
{
    int counter = 0;
    for (int i = 0; i < amount; i++) {
        if (search_value == array[i]) {
            counter++;
        }
    }
    if (counter > 2) {
        return 1;
    } else
        return 0;
}



