#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(){
    int escolhepalavra(){
    // Abre o(s) arquivo(s) que estão as palavras.
    FILE* f;

    f = fopen("teste.txt", "r");    
    if (f == 0){
        printf("Banco de dados nao disponivel\n\n");
        exit(1);
    }
    fclose(f);
    }
}