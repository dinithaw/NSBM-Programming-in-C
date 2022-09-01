// Write a function that accepts 2 whole numbers as parameters and calculate and return the quotient.

#include <stdio.h>

float quotient(int number1,int number2){
    return (number1/number2);
}

void main(){
    int num1,num2;
    printf("Enter The First Number: ");
    scanf("%d",&num1);
    printf("Enter The Second Number: ");
    scanf("%d",&num2);
    if(num1>=0 && num2>=0) {
        printf("\nQuotient = %.2f", quotient(num1, num2));
    } else
        printf("\nWhole Numbers Only!");
}
