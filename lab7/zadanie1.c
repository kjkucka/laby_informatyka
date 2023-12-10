#include <stdio.h>

int zmienna_globalna;

int funkcja(int zmienna_globalna, int zmienna_lokalna) {

    zmienna_globalna = 1;
    zmienna_lokalna = 2;

    printf("Adres zmiennej globalnej po przypisaniu wartości: %p\n", &zmienna_globalna);
    printf("Adres zmiennej lokalnej po przypisaniu wartości: %p\n", &zmienna_lokalna);

}

int main() {

    int zmienna_lokalna = zmienna_globalna;

    printf("Adres zmiennej globalnej: %p\n", &zmienna_globalna);
    printf("Adres zmiennej lokalnej: %p\n", &zmienna_lokalna);

    funkcja (zmienna_globalna, zmienna_lokalna);

    return 0;

}