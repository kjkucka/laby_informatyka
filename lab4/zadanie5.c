#include <stdio.h>

int main() {

    int n;

    printf("Wpisz dowolną liczbę:\n");
    scanf("%d", &n);

    int tab[n];

    printf("Podaj dowolne elementy tablicy:\n");
     
    for (int i = 0; i < n; i++) {

        scanf("%d", &tab[i]);

    }

    printf("Tablica tych liczb:\n");

    for (int i = 0; i < n; i++) {

        printf("%d\n", tab[i]);

    }

    return 0;

}