#include<stdio.h>



void Aslam_u_alikum();
void Namaste ();

int main () {
    printf("Enter P for pakistani and i for indian :- ");
    char ch;
    scanf("%c", &ch);

    if(ch == 'p') {
        Aslam_u_alikum();
    } else {
        Namaste();
    }
    
    return 0;
}

void Aslam_u_alikum() {
    printf("Aslam_u_alikum \n");
}

void Namaste () {
    printf("Namaste \n");
}