#include<stdio.h>
int main () {
    int age;
    printf("Enter your age :-");
    scanf("%d", &age);

    age >= 18 ? printf("Your are adult") : printf("Your are not adult");

    return 0;
}