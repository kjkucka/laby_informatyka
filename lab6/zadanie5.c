#include <stdio.h>

void liczby (int n) {

    if (n > 0) {
        liczby(n / 2);
        printf("%d", n % 2);
    }
    
}

int main() {

    int n;

    printf("Podaj liczbę dziesiętną: \n");
    scanf("%d", &n);

    if (n < 0) {
        printf("Liczba musi być nieujemna.\n");
        return 1;
    }

    printf("Postać binarna tej liczby to: ");

    if (n == 0) {
        printf("0");
    }

    else {
        liczby(n);
    }

    printf("\n");

    return 0;

}