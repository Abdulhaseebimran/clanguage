#include<stdio.h>

int calcPercentage (int maths, int computer, int urdu);

int main () {
    int maths = 89;
    int computer = 90;
    int urdu = 88;

    printf("Percentage is : %d", calcPercentage(maths, computer, urdu));
    return 0;
}

int calcPercentage (int maths, int computer, int urdu) {

    return((maths + computer + urdu ) / 3);
}