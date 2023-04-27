// Online C compiler to run C program online
#include <stdio.h>

int factorial(int n);

int main() {
    int number, result;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    result = factorial(number);
    
    printf("factorial = %d", result);
    return 0;
}

int factorial(int n) {
    if(n !=0) {
        return n * factorial(n-1);
    } else {
        return 1;
    }
}
