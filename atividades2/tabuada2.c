#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    printf("Escola Senai ""Euclides Facchini"" Votuporanga\n");
    printf("Leonardo da Silva Casteletti\n");

    int numero;

    printf("Qual o seu numero: ");
    scanf("%d", &numero); 

    for (int i = 1; i <= 10; i++){
        printf("%d X %d: %d\n", numero, i, numero * i);
    }
}