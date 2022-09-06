// Implement the following integer functions:
//  a) Function celsius returns the Celsius equivalent of a Fahrenheit temperature.
//  b) Function fahrenheit returns the Fahrenheit equivalent of a Celsius temperature.
//  c) Use these functions to write a program that prints charts showing the Fahrenheit equivalents of all Celsius temperatures from 0 to 100 degrees, and the Celsius equivalents of all Fahrenheit temperatures from 32 to 212 degrees. Print the outputs in a neat tabular format that minimizes the number of lines of output while remaining readable.

#include <stdio.h>

double celsius(double fahrenheit_value){
    double celsius_value = (((fahrenheit_value - 32) * 5)/9);
    return celsius_value;
}

double fahrenheit(double celsius_value){
    double fahrenheit_value = (((celsius_value * 9)/5)+ 32);
    return fahrenheit_value;
}


int main(void ){

    printf("Fahrenheit >>> Celsius\n");
    for (int i = 0; i <= 100; ++i) {
        printf("%.1lfF >>> %dC\n",fahrenheit(i),i);
    }

    printf("\n");

    printf("Celsius >>> Fahrenheit\n");
    for (int i = 32; i <= 212; ++i) {
        printf("%.1lfC >>> %dF\n", celsius(i),i);
    }

    return 0;
}
