// Write a program that inputs a series of integers and passes them one at a time to function even, which uses the remainder operator to determine if an integer is even. The function should take an integer argument and return 1 if the integer is even and 0 otherwise.

#include <stdio.h>

int even(int my_int){
    if(my_int%2==0){
        return 1; //EVEN
    } else{
        return 0; //ODD
    }
}

int main(void ){
    int size_of_series=0;
    printf("Enter the Size of the Number Series: ");
    scanf("%d",&size_of_series);

    int integer_series[size_of_series];

    for (int i = 0; i < size_of_series; ++i) {
        printf("Enter the Values: ");
        scanf("%d",&integer_series[i]);
        printf("%d\n", even(integer_series[i]));
    }

    return 0;
}
