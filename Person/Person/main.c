//
//  main.c
//  Person
//
//  Created by Christopher Clarke on 7/17/18.
//  Copyright © 2018 Christopher Clarke. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
    char f_name[20];
    char l_name[20];
    int age;
};

void store_person(char f_name[], char l_name[], int age);

int main(int argc, const char * argv[]) {
    
    store_person("Mike", "Jone", 20);
    return 0;
}

void store_person(char f_name[], char l_name[], int age) {
    struct person* ptr = malloc(sizeof(struct person));
    strcpy(ptr->f_name, f_name);
    strcpy(ptr->l_name, l_name);
    ptr->age = age;
    printf("My name is %s %s & my age is %i", ptr->f_name, ptr->l_name, ptr->age);
}





