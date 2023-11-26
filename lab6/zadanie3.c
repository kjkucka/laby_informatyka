#include <stdio.h>

void liczby(int n) {
    
    if (n > 0) {
        liczby(n - 1);
        printf("%d", n);
    }
    
}



int main() {

    int n;

    printf("Podaj dowolną liczbę n:\n");
    scanf("%d", &n);

    printf("Liczby od 1 do %d to:\n", n);
    liczby(n);
    printf("\n");

    return 0;

}