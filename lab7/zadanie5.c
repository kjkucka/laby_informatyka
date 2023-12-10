#include <stdio.h>

int sortowanie(int *a, int *b, int *c) {

    int temp;

    if (*a > *b) {

        int temp = *a;
        *a = *b;
        *b = temp;

    }

    if (*b > *c) {

        int temp = *b;
        *b = *c;
        *c = temp;
        
        if (*a > *b) {

            int temp = *a;
            *a = *b;
            *b = temp;

        }

    }

}

int main() {

    int a, b, c;

    printf("Podaj trzy liczby oddzielone spacjami:\n");
    scanf("%d %d %d", &a, &b, &c);

    sortowanie(&a, &b, &c);

    printf("Po sortowaniu: %d %d %d", a, b, c);

    return 0;

}