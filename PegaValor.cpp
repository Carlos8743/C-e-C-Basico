#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Limpa o buffer do teclado
void flush_in(){ 
    int ch;
    while( (ch = fgetc(stdin)) != EOF && ch != '\n' ){} 
}

int main(){
FILE *file;
file = fopen("Banco.txt", "r");
if(file == NULL){
    printf("Erro na execucao");
}else{
    
    printf("Em execucao\n");
    unsigned int num,i, result; float numf; char nome[100];
    //flush_in();   
      result = fscanf(file, "%d\n %f\n %s\n", &num, &numf, nome);
      printf("Num:%d Numf:%.3f Nome:%s\n", num, numf, nome);
       while( nome[i] ) 
   {
      putchar(tolower(nome[i]));
      i++;
   }
    if (result == EOF){
       printf("Variavel Não Encontrada");
    }
    fclose(file);
}
}