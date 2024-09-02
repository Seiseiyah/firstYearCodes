#include <stdio.h>

int main()
{
    int A = 0; int B = 0;

    printf("Enter number for A: ");
    scanf_s("%d", &A);

    printf("Enter number for B: ");
    scanf_s("%d", &B);

    printf("A:%d, B:%d", A, B);
    return 0;
}