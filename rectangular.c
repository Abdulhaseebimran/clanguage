#include<stdio.h>
#include<conio.h>
int main()
{
    float length, width , area;
    printf("Enter length of rectangular :");
    scanf("%f ", &length);
    printf("Enter width of rectangular :");
    scanf("%f ", &width);
    area = length * width;
    printf("Area of rectangular : %0.4f\n", area);
    return 0;
}