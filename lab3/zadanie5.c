#include <stdio.h>

int main () {

    char znak;
    int odpowiedz, znakk;
    
    printf("Jeśli chcesz wpisać znak, wpisz 1; jeśli chcesz wpisać kod ASCII, wpisz 2:\n");
    scanf("%d", &odpowiedz);

    if (odpowiedz == 1) {
        printf("Wpisz dowolny znak:\n");
        scanf(" %c", &znak);
        if ((znak >= 'a' && znak <= 'z') || (znak >= 'A' && znak <= 'Z')) {
            printf("%c jest literą alfabetu.\n", znak);
        }
        else {
            printf("%c nie jest literą alfabetu.\n", znak);
        }
    }

    else if (odpowiedz == 2) {
        printf("Wpisz dowolny kod ASCII:\n");
        scanf(" %d", &znakk);
        if ((znakk >= 97 && znakk <= 122) || (znakk >=65 && znakk <= 90)) {
            printf("%d jest literą alfabetu.\n", znakk);
        }
        else {
            printf ("%d nie jest literą alfabetu.\n", znakk);
        }
    }

    else {
        printf("Nie wybrałeś poprawnie znaku bądź kodu ASCII.");
    }

    return 0;

}