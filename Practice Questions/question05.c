// Write a function that displays the smallest of three floating-point numbers

#include <stdio.h>

float smallest(float number_1, float number_2, float number_3){

    if(number_1 < number_2 && number_1 < number_3){
        return number_1;
    } else if(number_2 < number_1 && number_2 < number_3){
        return number_2;
    } else{
        return number_3;
    }

}

int main(void){
    float num1,num2,num3;

    printf("Enter 3 Floating Point Numbers \n");
    printf("First Number: ");
    scanf("%f",&num1);
    printf("Second Number: ");
    scanf("%f",&num2);
    printf("Third Number: ");
    scanf("%f",&num3);

    printf("The Smallest Number is =  %f", smallest(num1,num2,num3));

    return 0;
}
