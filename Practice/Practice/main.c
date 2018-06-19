//
//  main.c
//  Practice
//
//  Created by Christopher Clarke on 6/19/18.
//  Copyright © 2018 Christopher Clarke. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int c_num;
    float consumption;
    float charge = 0;
    printf("Enter you customer number:");
    scanf("%i", &c_num);
    printf("\nEnter power consumed:");
    scanf("%f", &consumption);
    if (consumption < (float) 200) {
        charge = consumption * .50;
    } else if (consumption > (float) 200 && consumption < (float) 400) {
        charge = 1.00 + (.65 * (consumption - 200)) + consumption * .50;
    } else if (consumption < 600) {
        charge = 2.30 + (.80 * (consumption - 400)) + (.65 * (consumption - 200)) + consumption * .50;
    } else {
        printf("You using too much power\n");
    }
    printf("Your total charge is %.2f\n", charge);
    return 0;
}
