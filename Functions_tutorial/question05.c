// Write a function to read 2 numbers and display the sum. Call this function from the main function several times.
#include <stdio.h>

int sum(){
    int number1, number2;
    printf("Enter The First Number: ");
    scanf("%d",&number1);
    printf("Enter The Second Number: ");
    scanf("%d",&number2);
    printf("%d\n",number1+number2);
}

void main(){
    sum();
    sum();
    sum();
}
