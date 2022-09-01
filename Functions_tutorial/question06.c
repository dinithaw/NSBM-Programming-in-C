// Write a function which accepts 2 integers as parameters and display the sum, difference and product using a single printf statement.

#include <stdio.h>

int calculations(int num1,int num2){
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    printf("\nSum = %d \nDifference = %d \nProduct = %d \n",sum,difference,product);
}

void main(){
    int number1, number2;
    printf("Enter The First Number: ");
    scanf("%d",&number1);
    printf("Enter The Second Number: ");
    scanf("%d",&number2);
    calculations(number1,number2);
}
