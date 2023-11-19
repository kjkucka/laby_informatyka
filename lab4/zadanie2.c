# include <stdio.h>

int main() {

    unsigned int a, b;
    unsigned long long wynik = 1;

    printf("Wypisz dwie dowolne liczby naturalne:\n");
    scanf("%u %u", &a, &b);

    for (int i = 0; i <= b; i++) {

        wynik *= a;
    }

    printf("Wynik działania %u do potęgi %u to: %llu\n", a, b, wynik);

return 0;

}
