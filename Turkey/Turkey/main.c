//
//  main.c
//  Turkey
//
//  Created by Andrei on 6/9/15.
//  Copyright (c) 2015 Andrei. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#import <readline/readline.h>
#include <math.h>

typedef struct {
    float heightInMeters;
    int weightInKilos;
} Person;

float bmi (Person P){
    return P.weightInKilos / P.heightInMeters;
}

int main(int argc, const char * argv[])
{
    Person mikey;
    mikey.heightInMeters = 1.7;
    mikey.weightInKilos = 96;
    
    Person aron;
    aron.heightInMeters = 5.0;
    aron.weightInKilos = 84;
    
    float b;
    b = bmi(mikey);
    
    printf("%.2f", b);

}


