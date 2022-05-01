#include<stdio.h>

void calculatePrice(float value);

int main () {
     float value = 100;
     calculatePrice(value);
     printf("value is : %f\n", value);
     return 0;

}

void calculatePrice(float value) {
   value = value  + (0.18 * value);
   printf("Final price is : %f\n", value);

}