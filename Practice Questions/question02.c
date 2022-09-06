// Write a function integerPower(base, exponent) that returns the value of baseexponent For example, integerPower( 3, 4 ) = 3 * 3 * 3 * 3. Assume that exponent is a positive, nonzero integer, and base is an integer. Function integerPower should use for to control the calculation. Do not use any math library functions.

#include <stdio.h>

long int integerPower(long int base,long int exponent){

    long int number = 1;

    for (int counter = 0; counter < exponent; ++counter) {
        number = number * base;
    }

    return number;
}

int main(void ){
    long int base_input, exponent_input, result;

    printf("Enter the BASE value: ");
    scanf("%ld",&base_input);
    printf("Enter the EXPONENT value: ");
    scanf("%ld",&exponent_input);

    result = integerPower(base_input,exponent_input);

    printf("%ld",result);

    return 0;
}
