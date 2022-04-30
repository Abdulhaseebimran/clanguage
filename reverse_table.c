#include<stdio.h>
#include<conio.h>

int maun () {
    int n;
    printf("Enter number :- ");
    scanf("%d", &n);

    for (int  i=10 ; i >=1 ; i--)
    {
        printf("%d\n", n * i);
    }
    return 0;
}