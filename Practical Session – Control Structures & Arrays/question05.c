// Allow the user to input a series of numbers terminates when the user enters either āNā or ānā and display the running total (Sum of all the entered numbers). (Use do-while loop)

#include <stdio.h>
int main() {
    float number, sum = 0;

    printf("Enter the Values You Want to Add | Enter '0' for Exit\n");
    do {
        printf(">>> ");
        scanf("%f",&number);
        sum = sum + number;
    } while (number != 0 || number != 0);
    printf("Total = %.2f\n",sum);

    return 0;
}
