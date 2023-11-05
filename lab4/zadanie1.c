#include <stdio.h>

int main() {

    unsigned int n;
    unsigned int suma_kwadrat = 0;

    printf("Wpisz dowolną liczbę naturalną:\n");
    scanf("%u", &n);

    for(unsigned long i = 1; i <= n; i++) {
        suma_kwadrat += i * i;
    }

    printf("Suma kwadratów od 1 do %u to: %u\n", n, suma_kwadrat);

    return 0;

}

