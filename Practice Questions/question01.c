// Define a function called hypotenuse that calculates the length of the hypotenuse of a right triangle when the other two sides are given. Use this function in a program to determine the length of the hypotenuse for each of the following triangles. The function should take two arguments of type double and return the hypotenuse as a double.

#include <stdio.h>
#include <math.h>

double hypotenuse(double x, double y){
    double z = sqrt((x*x) + (y*y));
    return z;
}

int main(void ){
    double side1, side2, side3;

    printf("Enter the Length of First Side: ");
    scanf("%lf",&side1);
    printf("Enter the Length of Second Side: ");
    scanf("%lf",&side2);

    side3 = hypotenuse(side1, side2);

    printf("Hypotenuse of the Triangle is = %lf\n",side3);

    return 0;
}
