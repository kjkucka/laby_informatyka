#include <stdio.h>

int main() {

    int rok;

    printf("Wpisz dowolny rok:\n");
    scanf("%d", &rok);

    if (rok % 400 == 0) {
        printf("Rok %d jest przestępny.\n", rok);
    }

    else if (rok % 100 == 0) {
        printf("Rok %d nie jest przestępny.\n", rok);
    }

    else if (rok % 4 == 0) {
        printf("Rok %d jest przestępny.\n", rok);
    }

    else {
        printf("Rok %d nie jest przestępny.\n", rok);
    }

    return 0;

}