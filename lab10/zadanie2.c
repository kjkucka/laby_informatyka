#include <stdio.h>

int main() {

    char nazwa[100];
    char n;

    printf("Podaj nazwę pliku: ");
    scanf("%s", nazwa);

    FILE *plik = fopen(plik, "r");

    if (plik == NULL) {

        printf("Nie można otworzyć pliku\n");
        
        return 1;

    }

    while((n = fgetc(plik)) != EOF) {

        putchar(n);

    }

    return 0;

}