#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    if (access("plik.txt", F_OK) == 0) {

        printf("Plik plik.txt istnieje w katalogu domowym\n");

    }

    else {

        printf("Plik plik.txt nie istnieje w katalogu domowym\n");

    }

    return 0;
    
}