#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void abertura(int multiplicador){
    //AQUI NÃO ENXERGAMOS A VARIÁVEL MULTIPLICADOR
    printf("Tabuado do: \n");
    //printf("Quero imprimir o multiplicador aqui, mas nao consigo... \n");
}

int main(){
    int multiplicador;

    printf("Defina o multiplicador: ");
    scanf("%d", &multiplicador);

    abertura(multiplicador);

    for(int i = 0; i <= 10; i++){
        int resultado = multiplicador * i;
        printf("%d X %d = %d\n", i, multiplicador, resultado);
    }
}