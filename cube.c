#include<stdio.h>
#include<conio.h>
int main()
{
    int num , cube;
    printf("Enter number : \n");
    scanf("%d", &num);
    cube = num * num * num ;
    printf("Cube of a number is : %d", cube);
    return 0;
}