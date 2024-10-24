#include <stdio.h>

int main(void) {
    int lunghezzaL;
    printf("Inserisci la lunghezza del lato del quadrato: ");
    scanf("%d", &lunghezzaL);
    for (int i = 0; i < lunghezzaL; i++) {
        for (int j = 0; j < lunghezzaL; j++) {
            if (i == 0 || i == lunghezzaL - 1 || j == 0 || j == lunghezzaL - 1) {
                printf("*  ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}

