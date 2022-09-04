// Write a program to input an item number, description, price of a product, quantity, and display item number, description with the total price

#include <stdio.h>


int main(){
    int size = 0;
    printf("Enter the Number of Items: ");
    scanf("%d",&size);
    int item_number[size],quantity[size];
    char description[size];
    float price[size],sub_total[size],total=0;

    for (int i = 0; i < size; ++i) {
        printf("\n");
        printf("Enter the Item Number: ");
        scanf("%d",&item_number[i]);
        printf("Enter the Description: ");
        scanf("%s",&description[i]);
        printf("Enter the Price: ");
        scanf("%f",&price[i]);
        printf("Enter the Quantity: ");
        scanf("%d",&quantity[i]);
        sub_total[i] = price[i] * quantity;
    }

    printf("Item Number\tDescription\tPrice\tQuantity\tSub Total\n");
    for (int i = 0; i < size; ++i) {
        printf("%d\t%c\t%.2f\t%d\t%f\n",item_number[i],description[i],price[i],quantity[i],sub_total[i]);
        total = total + sub_total[i];
    }
    printf("Total = %.2f",total);

    return 0;
}
