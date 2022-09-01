//Write a function that will read 2 numbers and calculate and display sum and difference.
#include <stdio.h>
void sum(){
    int number1,number2;
    printf("Enter the First Number: ");
    scanf("%d",&number1);
    printf("Enter the Second Number: ");
    scanf("%d",&number2);
    printf("\nSum = %d",number1+number2);
    printf("\nDifference = %d",number1-number2);
}
void main(){
    sum();
}
