#include<stdio.h>

int main () {
    int marks;

    printf("Enter number (0-100) :- ");
    scanf("%d", &marks);

    if(marks < 30){
        printf("Grade C \n");
    } else if (marks >= 30 && marks < 70 )
    {
        printf("Grade B \n");
    } else if (marks >= 70 && marks < 90 )
    {
        printf("Grade A \n");
    } else
    {
        printf("Grade A+ \n");
    }
    
     return 0;
    }