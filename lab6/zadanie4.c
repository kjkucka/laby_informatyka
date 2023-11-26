#include <stdio.h>

int fibonacci(int n) {

    if (n <= 1) {
        return n;
    } 
    
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {

    int n;

    printf("Podaj numer wyrazu ciągu Fibonacciego: \n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Numer wyrazu musi być liczbą dodatnią.\n");
        return 1;
    }

    printf("%d. wyraz ciągu Fibonacciego to: %d\n", n, fibonacci(n));

    return 0;
    
}