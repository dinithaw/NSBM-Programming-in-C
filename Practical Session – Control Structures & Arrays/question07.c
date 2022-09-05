// Declare a Single dimensional array with 10 elements. Input the values to the array and find   the followings;
////    I. Minimum value
////    II. Maximum value
////    III. Average value
////    IV. Reverse order of values

#include <stdio.h>

int main(){
    int values[10], min, max, sum=0;
    float avg;

    printf("Enter 10 Values\n");
    for (int i = 0; i < 10; ++i) {
        printf(">>> ");
        scanf("%d",&values[i]);
    }

    min = values[0];
    max = values[0];

    int counter = 0;
    while (counter < 10){

        if (values[counter]<min){
            min = values[counter];
        }
        if(values[counter]>max){
            max = values[counter];
        }

        sum = sum + values[counter];

        counter++;
    }

    avg = sum/10;

    printf("Minimum Value = %d\n",min);
    printf("Maximum Value = %d\n",max);
    printf("Average Value = %.2f\n",avg);

    printf("Reverse Order of Values: ");
    for (int i = 9; i >= 0; i--) {
        printf("%d\t",values[i]);
    }

    return 0;
}
