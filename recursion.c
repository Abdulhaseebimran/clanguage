#include<stdio.h>

void printHW (int conut);

int main () {
     
     printHW(10);
    return 0;
}

// recursive function 
void printHW (int conut){

    if (conut == 0){
        return;
    }
     printf("Hello World\n");
     printHW(conut - 1);
}