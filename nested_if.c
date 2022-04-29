#include<stdio.h>

int main () {
    int number;
    printf("Enter Number :- ");
    scanf("%d", &number);
    if (number >= 0){
        printf("Positive number \n");
        if (number % 2 == 0){
            printf("Even number \n");
        } else {
            printf(" ODD number \n");
        } 
        
        }  else
        {
            printf("Negative number \n");
        }
        return 0;
}