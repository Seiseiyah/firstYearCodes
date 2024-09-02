#include <stdio.h>

int main(){
    int number;
    printf("Enter the number between -100 to 100: ");
    scanf("%d", &number);
    if(number < -100 || number >100){
        printf("Out of bounce");
    } else {
        if(number % 2 == 0){
            printf("%d is even.", number);
        } else {
            printf("Number is odd");
        }
    }
}