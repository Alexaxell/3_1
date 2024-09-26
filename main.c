#include <stdio.h>

int main(void) {
    int a;
    printf("inserisci un numero intero:");
    scanf("%d", &a);
    if (a %2  == 0) {
        printf("il numero inserito è pari \n");
    }
    else {
        printf("il numero inserito è dispari \n");
    }


    return 0;
}
