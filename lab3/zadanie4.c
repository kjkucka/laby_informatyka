#include <stdio.h>

int main () {

    int a, b, c;
    
    printf("Podaj 3 dowolne liczby całkowite\n");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("%d jest największą z tych liczb\n", a);
    }

    if (b >= a && b >= c) {
        printf("%d jest największą z tych liczb\n", b);
    }

    if (c >= a && c >= b) {
        printf("%d jest największą z tych liczb\n", c);
    }

    return 0;

}