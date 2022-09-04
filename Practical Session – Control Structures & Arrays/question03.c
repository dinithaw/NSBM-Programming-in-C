//  Display each of the following number series using 1. While 2. Do while and 3. For loops
////    a. 1 2 3 4 …………..100
////    b. 50 45 40 …………...5
////    c. -2 -4 -6 ……………… -20

#include <stdio.h>
int main(){
    int number1 = 1, number2 = 1;

    printf("Start of The While Loop\n");
    while (number1<=100){
        printf("%d\n",number1);
        number1++;
    }
    printf("End of The While Loop\n");

    printf("Start of The Do-While Loop\n");
    do {
        printf("%d\n",number2);
        number2++;
    } while (number2<=100);
    printf("End of The Do-While Loop\n");

    printf("Start of The For Loop\n");
    for (int number3 = 1; number3 <= 100; ++number3) {
        printf("%d\n",number3);
    }
    printf("End of The For Loop\n");



    int number4 = 50, number5 = 50;

    printf("Start of The While Loop\n");
    while (number4>=5){
        printf("%d\n",number4);
        number4-=5;
    }
    printf("End of The While Loop\n");

    printf("Start of The Do-While Loop\n");
    do {
        printf("%d\n",number5);
        number5-=5;
    } while (number5>=5);
    printf("End of The Do-While Loop\n");

    printf("Start of The For Loop\n");
    for (int number6 = 50; number6 >= 5; number6 -= 5) {
        printf("%d\n",number6);
    }
    printf("End of The For Loop\n");


    int number7 = -2, number8 = -2;
    printf("Start of The While Loop\n");
    while (number7>=-20){
        printf("%d\n",number7);
        number7-=2;
    }
    printf("End of The While Loop\n");

    printf("Start of The Do-While Loop\n");
    do {
        printf("%d\n",number8);
        number8-=2;
    } while (number8>=-20);
    printf("End of The Do-While Loop\n");

    printf("Start of The For Loop\n");
    for (int number9 = -2; number9>=-20; number9-=2) {
        printf("%d\n",number9);
    }
    printf("End of The For Loop\n");


    return 0;
}
