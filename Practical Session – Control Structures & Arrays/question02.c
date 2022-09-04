// Write a program to an input birth year of a student and display the student is a ‘Teenager’ or ‘Not a Teenager’.

#include <stdio.h>

int main(){
    int current_year, students;
    printf("Enter the Current Year: ");
    scanf("%d",&current_year);
    printf("Enter the Number of Students: ");
    scanf("%d",&students);
    int birthyear[students];

    printf("\n");
    for (int i = 0; i < students; ++i) {
        printf("%d.) Enter the Birthyear: ",i);
        scanf("%d",&birthyear[i]);
    }

    printf("\n| YEAR |     STATUS     |\n");
    for (int i = 0; i < students; ++i) {
        printf("| %d |",birthyear[i]);
        if((current_year - birthyear[i])>12 && (current_year - birthyear[i])<20){
            printf(" TEENAGER       |\n");
        } else{
            printf(" NOT A TEENAGER |\n");
        }
    }

    return 0;
}
