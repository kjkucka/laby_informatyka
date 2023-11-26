#include <stdio.h>

int liczby(int n) {
    
    if (n > 0) {
        liczby(n - 1);
        printf("%d", n);
    }
    
}



int main() {

    int n;

    printf("Podaj dowolną liczbę n:\n");
    scanf("%d", &n);

    if (n < 1) {
        printf("Liczba n musi być większa lub równa 1.\n");
        return 1;
    }

    else {
        printf("Liczby od 1 do %d to: \n", n);
        liczby(n);
    }

    return 0;

}