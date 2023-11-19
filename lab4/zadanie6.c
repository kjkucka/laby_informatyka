#include <stdio.h>

int main() {
    
    int tab[3][3] = {{1,0,1},{0,0,1},{0,1,0}};

    printf("|---|\n");

    for (int i = 0; i < 3; i++) {

        printf("|");

        for (int j = 0; j < 3; j++) {

            if (tab[i][j] == 1) {

                printf("x");

            }

            else {

                printf(" ");

            }
        }

        printf("|\n");
    }

    printf("|---|\n");


    return 0;

}