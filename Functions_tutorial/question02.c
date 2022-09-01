//Write a function that accepts 2 numbers as parameters and calculate and display sum and difference.
#include <stdio.h>

void calculate(int number1, int number2){
    int sum = number1 + number2;
    int difference = number1 - number2;
    printf("\nSum = %d",sum);
    printf("\nDifference = %d",difference);
}

void main(){
    int number1,number2;
    printf("Enter the First Number: ");
    scanf("%d",&number1);
    printf("Enter the Second Number: ");
    scanf("%d",&number2);
    calculate(number1,number2);
}
