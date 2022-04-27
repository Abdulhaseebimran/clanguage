#include<stdio.h>
int main() {
int a, b, small;
printf("Enter Two Number :");
scanf("%d %d", &a , &b);
if (a<b)
{
    small = a;
} else 
{
   small = b;
}  
printf("%d is smallest number ", small);
return 0;
}