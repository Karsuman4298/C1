#include <stdio.h>
// recursive base
void disp() {
    printf("enter the value of n : \n");
    scanf("%d");
    disp();
}

int main() {
    int ar,a;
    printf("hello world\n");
    disp();
    return 0;
}
