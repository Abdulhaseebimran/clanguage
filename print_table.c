#include<stdio.h>

int sum (int a, int b);
void printtable(int n);

int main () { 
    int n;
    printf("Enter number :- ");
    scanf("%d", &n);
    

    printtable(n); // argument // actual parameter 
    

    return 0;

}

int sum (int a , int b){
     return a + b;
}

void printtable(int n) { // parameter // formal parameter 
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n",i*n);
    }
    
}