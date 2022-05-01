#include<stdio.h>

int sum (int a, int b);

int main () { 
    int a,b;
    printf("Enter first number :- ");
    scanf("%d", &a);
    printf("Enter seconds number :- ");
    scanf("%d", &b);

    int s = sum (a , b);
    printf("Sum is : %d \n", s);
    

    return 0;

}

int sum (int a , int b){
     return a + b;
}