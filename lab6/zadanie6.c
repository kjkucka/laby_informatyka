#include <stdio.h>

int suma(int n) {

    if (n == 0) {
        return 0;
    }

    else {
        return n % 10 + suma(n / 10);
    }

}

int main() {

    int liczba;

    printf("Podaj dowolną liczbę: \n");
    scanf("%d", &liczba);

    int wynik = suma(liczba);

    printf("Suma cyfr liczby %d wynosi: %d.\n", liczba, wynik); 

    return 0;
    
}