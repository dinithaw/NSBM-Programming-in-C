// Write a function which accepts an integer and a float value as parameters and return the product as a double value. Display the result from the main function.

#include <stdio.h>

double product (int my_int, float my_float){
    return (my_int * my_float);
}

void main(){
    int my_int;
    float my_float;
    printf("Enter an Integer: ");
    scanf("%d",&my_int);
    printf("Enter a Float: ");
    scanf("%f",&my_float);
    printf("\nProduct = %lf", product(my_int,my_float));
}
