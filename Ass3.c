#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nAddition = %d", a + b);
    printf("\nSubtraction = %d", a - b);
    printf("\nMultiplication = %d", a * b);

    if(b != 0)
    {
        printf("\nDivision = %d", a / b);
        printf("\nModulus = %d", a % b);
    }
    else
    {
        printf("\nDivision is not possible");
        printf("\nModulus is not possible");
    }

    return 0;
}