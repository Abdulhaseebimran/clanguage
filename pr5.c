#include<stdio.h>
// #include<conio>
int main()
{
    int x, y, z;
    float avg;
    printf("Enter Three Number :");
    scanf("%d ", &x, &y, &z);
    avg = (x+y+z)/3.0;
    printf("Average of three number is : %f", avg);
    return 0;
}