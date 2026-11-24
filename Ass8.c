#include<stdio.h>

int main() {
    int a, b, temp;
    int *p1, *p2;

    printf("Enter two numbers: ");
    if(scanf("%d %d" , &a, &b) != 2){
        printf("Invalid Input");
        return 1;
    }

    p1 = &a;
    p2 = &b;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After swapping\n");
    printf("a = %d \t", a);
    printf("b = %d", b);

    return 0;
}