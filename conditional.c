#include <stdio.h>
#include<conio.h>
int main() {
    int age ;
    printf("Enter your age :- ");
    scanf("%d", &age);
    
    if(age >= 18){
        printf("Your are adult \n");
        printf("They can vote \n");
        printf("They can drive \n");
    } else if (age > 13 && age <= 18)
    {
        printf("\n Your are teenager");
    }
    
     else {
        printf("Your are not adult \n");
    }

    printf("\n THANK YOU \n");
    return 0;
}