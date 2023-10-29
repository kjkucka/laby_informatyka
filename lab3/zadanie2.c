#include <stdio.h>

int main() {

    int a, b, suma, roznica, mnozenie, dzielenie, reszta;

    printf("Podaj dwie liczby\n");
    scanf("%d %d", &a, &b);

    suma = a + b;

    roznica = a - b;

    mnozenie = a * b;

    dzielenie = a / b;

    reszta = a % b;

    printf("Wynik dodawania tych liczb to: %d + %d = %d\n", a, b, suma);

    printf("Wynik odejmowania tych liczb to: %d - %d = %d\n", a, b, roznica);

    printf("Wynik mnożenia tych liczb to: %d * %d = %d\n", a, b, mnozenie);

    printf("Wynik dzielenia tych liczb to: %d / %d = %d\n", a, b, dzielenie);

    printf("Reszta z dzielenia to: %d\n", reszta);

    return 0;

}