#include<stdio.h>
int main () {
    for (int i=1 ; i<=10; i++){
        if (i == 5){
          break;
        }
        printf("%d \n", i);
    }
    printf("END !");
    return 0;
}