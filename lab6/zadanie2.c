#include <stdio.h>

int NWD(int a, int b) {

    if (b == 0) {
        return a;
    }

    else {
        return NWD(b, a % b);
    }
}

int main() {

    int a, b;

    printf("Podaj dowolną liczbę a:\n");
    scanf("%d", &a);

    printf("Podaj dowolną liczbę b:\n");
    scanf("%d", &b);

    printf("NWD(%d, %d) = %d\n", a, b, NWD(a,b));

    return 0;

}