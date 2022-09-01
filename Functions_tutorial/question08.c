/*
8. Give the function header for each of the following functions.
    a. Function hypotenuse that takes two double-precision floating-point arguments, side1 and side2, and returns a double-precision floating-point result.
    b. Function smallest that takes three integers, x, y, z, and returns an integer.
    c. Function instructions that does not receive any arguments and does not return a value. [Note: Such functions are commonly used to display instructions to a user.]
    d. Function intToFloat that takes an integer argument, number, and returns a floatingpoint result.
*/
#include <stdio.h>

double hypotenuse(double side1, double side2){
    double value = (side1*side1) + (side2*side2);
    return value;
}

int smallest(int x, int y, int z){
    if(x<y && x<z){
        return x;
    } else if (y<x && y<z){
        return y;
    } else
        return z;
}

void instructions(){
    printf("This is a Function\n");
    printf("This is a Function\n");
    printf("This is a Function\n");
}

float intToFloat(int number){
    return number;
}

void main(){
    double side1,side2;
    int x,y,z,number;

    printf("Enter The Length of First Side: ");
    scanf("%lf",&side1);
    printf("Enter The Length of Second Side: ");
    scanf("%lf",&side2);
    printf("Hypotenuse = %lf\n\n", hypotenuse(side1,side2));

    printf("Enter the First Value: ");
    scanf("%d",&x);
    printf("Enter the Second Value: ");
    scanf("%d",&y);
    printf("Enter the Third Value: ");
    scanf("%d",&z);
    printf("Smallest Number = %d\n\n", smallest(x,y,z));

    instructions();
    instructions();
    printf("\n");

    printf("Enter a Integer: ");
    scanf("%d",&number);
    printf("Float Value = %f\n", intToFloat(number));

}
