//  Input 10 numbers and display the total count of odd, even numbers in the entered number series. (Use for loop)

#include <stdio.h>

int main(){
    int numbers[10];
    int even=0, odd=0;

    printf("Enter 10 Numbers \n");

    for (int i = 0; i < 10; ++i) {
        printf(">>> ");
        scanf("%d",&numbers[i]);
    }

    for(int i = 0; i < 10; i++){
        if(numbers[i]%2 == 0){
            even++;
        } else{
            odd++;
        }
    }

    printf("Number of ODD Numbers: %d\n",odd);
    printf("Numbe of EVEN Numbers: %d\n",even);

    return 0;
}
