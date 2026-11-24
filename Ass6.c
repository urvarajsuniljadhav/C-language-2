#include<stdio.h>

long long factorial(int n) {
    if(n == 0 || n == 1){
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    int choice;

    printf("---Factorial---  \n 1. With Recursion \n 2. Without Recursion");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice < 1 || choice > 2) {
        printf("Invalid Choice");
        return 0;
    }

    printf("\nEnter a number: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial for negative number is not defined.");
        return 0;
    }
    if(n > 20) {
        printf("Number is too large.");
        return 0;
    }
    

    switch(choice) {
        case 1 : {
            printf("Factorial = %lld", factorial(n));
            break;
        }
        case 2 : {
            long long fact = 1;

            if(n < 0) {
                printf("Factorial is not defined for negative number.");
            }
            else if(n > 20){
                printf("Number is too large.");
            }
            else {
                for(int i = 1; i <= n; i++) {
                    fact = fact * i ;
                }
                printf("Factorial = %lld", fact);
            }
            break;
        }
        default : {
            printf("Invalid");
            break;
        }
    }
    return 0;
}