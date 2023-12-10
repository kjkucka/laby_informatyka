#include <stdio.h>

int main() {

    int tablice [10];

    printf("Podaj 10 elementów tablicy: \n");

    for(int i = 0; i < 10; i++) {

        scanf("%d", &tablice[i]);

    }

    for(int i = 0; i <10; i++) {

        printf("%p\n", &tablice[1]);

    }

    return 0;

}