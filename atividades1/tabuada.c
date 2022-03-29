#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int numero;

    printf("Qual o seu numero ");
    scanf("%d", &numero); 

    for (int i = 1; i <= 10; i++){
        printf("%d X %d: %d\n", numero, i, numero * i);
    }
}