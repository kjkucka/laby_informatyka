# include <stdio.h>

int main() {

    unsigned int a, b, c = 0;
    unsigned int wynik = 1;

    printf("Wypisz dwie dowolne liczby:\n");
    scanf("%u %u", &a, &b);

    while (wynik < b) {

        wynik *= a;
        c++;

    }

    printf("Aby znaleźć liczbę większą od %u, trzeba spotęgować liczbę %u do %u\n", b, a, c);

return 0;

}