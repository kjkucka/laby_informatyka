# include <stdio.h>

int main() {

    int tab[10];

    tab[0] = 1;
    tab[1] = 2;
    tab[2] = 3;
    tab[3] = 4;
    tab[4] = 5;
    tab[5] = 6;
    tab[6] = 7;
    tab[7] = 8;
    tab[8] = 9;
    tab[9] = 10;

    for (int i = 0; i < 10; i++) {

        tab[i] *= tab[i];

    }

    printf("Tablica kwadratów:\n");
    
    for (int i = 0; i < 10; i++) {
        
        printf("%d\n", tab[i]);

    }

return 0;

}