#include<stdio.h>

float squareArea (float side);
float circleArea (float rad);
float rectangularArea (float a, float b);

int main () {

   float a = 5.0;
   float b = 4.0;
   printf("area is : %f \n", rectangularArea(a,b));  
   return 0;
}

float squareArea (float side){
    return side * side;
}

float circleArea (float rad) {
    return 3.14 * rad * rad;
}

float rectangularArea (float a, float b) {
    return a * b;
}