#include <stdio.h>

int najwiekszy_element(int *tablica, int rozmiar) {

    if (rozmiar <= 0 || tablica == NULL) {

        printf("Błędna tablica.\n");

        return -1;

    }

    int max = tablica[0];
    int index_max = 0;

    for (int i = 1; i < rozmiar; i++) {

        if (tablica[i] > max) {

            max = tablica[i];
            index_max = i;
        }
    }

    tablica[index_max] = 0;

    return max;
}

int main() {

    int tablica[] = {3, 6, 10, 43, 72, 18, 26, 39};

    int rozmiar_tablicy = sizeof(tablica) / sizeof(tablica[0]);

    int max = najwiekszy_element(tablica, rozmiar_tablicy);

    if (max != -1) {

        printf("Największy element: %d\n", max);

        printf("Tablica po zamianie największego elementu na 0:\n");

        for (int i = 0; i < rozmiar_tablicy; i++) {

            printf("%d", tablica[i]);

        }

        printf("\n");

    } else {

        printf("Wystąpił błąd.\n");

    }

    return 0;

}