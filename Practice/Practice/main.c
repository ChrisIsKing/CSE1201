//
//  main.c
//  Practice
//
//  Created by Christopher Clarke on 7/10/18.
//  Copyright © 2018 Christopher Clarke. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// structure definition
typedef struct car {
    char name[20];
    char brand[20];
    int engine_size;
    int year;
}car;

// car storage
car car_collection[100];

// function prototypes
void insert_car(int);
void search_car(int);
void menu(void);

int main(int argc, const char * argv[]) {
    
    int option; //store the users option
    int counter = 0; // store the amount of cars
    
    
    while (true) {
        printf("Enter 0 to insert a car, Enter 1 to search for a car: ");
        scanf("%i", &option);
        
        switch (option) {
            case 0:
                insert_car(counter);
                counter++;
                break;
            
            case 1:
                search_car(counter);
                break;
                
            case 2:
                return 0;
                
            default:
                break;
        }
    }
}

void insert_car(int counter) {
    // Ask user for car information
    printf("\nEnter car name: ");
    scanf("%s", car_collection[counter].name);
    printf("\nEnter car brand: ");
    scanf("%s", car_collection[counter].brand);
    printf("\nEnter engine size: ");
    scanf("%i", &car_collection[counter].engine_size);
    printf("\nEnter year: ");
    scanf("%i", &car_collection[counter].year);
}

void search_car(int counter) {
    char name[20];
    int found = 0;
    
    // Ask user for car name
    printf("\nEnter the name of your desired car:");
    scanf("%s", name);
    
    // Search for enter car
    for (int i = 0; i < counter; i++) {
        if (strcmp(name, car_collection[i].name)== 0) {
            found = 1;
        }
    }
    
    // check if car was found
    if (found == 1) {
        printf("\nWe found your car");
    } else {
        printf("\nSorry car not found");
    }
    
}




