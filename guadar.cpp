# include <stdio.h>
# include <string.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
// arquivo em c que Guarda informações num arquivo txt
    FILE *arq;
    unsigned int num;
    float numf; 
    char nome[30];
    arq = fopen("Banco.txt", "w");
    if(arq == NULL){
        printf("O Arquivo nao pode ser aberto");
    }else{
    //fputs ("Fopen Numero\n",arq); escrever algo no arquivo
    printf("\n escreva um numero: ");
    scanf("%d", &num);
    printf("\n escreva um numero real: ");
    scanf("%f", &numf);
    printf("\n escreva um nome: ");
    scanf("%s", &nome);
    fprintf(arq, "%d\n%f\n%s\n", num, numf, nome);
    printf("Salvou isso aqui: %d %f %s", num,numf,nome);
    fclose(arq);
    }
}
