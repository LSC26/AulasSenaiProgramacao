#include <stdio.h>

//int soma = 0;
//
//int main(){
//    for (int i = 1; i <= 100; i++){
//        printf("FOR\n");
//        printf("Numero: %d\n", i);
//        printf("Soma: %d\n\n", soma = soma + i);
//    }
//}

int main(){
    int i = 0;
    int soma = 0;

    while(i <= 100){
        printf("WHILE\n");
        printf("Numero: %d\n", i);
        printf("Soma: %d\n\n", soma = soma + i);
        i++;
    }
}