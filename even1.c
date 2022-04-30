#include<stdio.h>
int main () {
    int n;
   do {
       printf("Enter number :- ");
    scanf("%d", &n);
    printf("%d\n", n);

    if ( n % 2 != 0){
        break;
    }
   } while (1);
    printf("THANK YOU ");

   do {
       printf("Enter number :- ");
    scanf("%d", &n);
    printf("%d\n", n);

    if ( n % 7 == 0){
        break;
    }
   } while (1);
    printf("THANK YOU ");

    return 0;
}