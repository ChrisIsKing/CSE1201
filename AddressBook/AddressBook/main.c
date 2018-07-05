//
//  main.c
//  AddressBook
//
//  Created by Christopher Clarke on 7/3/18.
//  Copyright © 2018 Christopher Clarke. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct contact {
    char name[50];
    int age;
    char gender;
    char address[100];
    char tel_num[10];
}contact;

int main(int argc, const char * argv[]) {
    // insert code here...
    contact persons[100];
    strcpy(persons[0].name, "John");
    persons[0].age = 24;
    persons[0].gender = 'M';
    strcpy(persons[0].address, "Kitty");
    strcpy(persons[0].tel_num, "2222222");
    printf("My name is %s, I am %i years old and I am live in %s and my telephone number is %s\n", persons[0].name, persons[0].age, persons[0].address, persons[0].tel_num);
    
    contact* ptr = malloc(sizeof(contact));
    ptr->age = 20;
    strcpy(ptr->name, "Mike");
    printf("\nMy name is %s\n", ptr->name);
    
    printf("Hello, World!\n");
    return 0;
}




