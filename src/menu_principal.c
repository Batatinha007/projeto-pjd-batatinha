#include <stdio.h>

int main()

{

char var = 'i';
char var1 = 'c';
char var2 = 's';
char texto;

printf("Por gentileza selecione uma opção valida\n");
printf("Selecine\n 'i' para Iniciar\n 'c' para Configurar\n 's' para Sair\n ");
scanf(" %c" , &texto);

  
  
   if(texto == 'i' || 'I'){
    printf("a opção selecionada foi Iniciar");
    }else if(texto == 'c' || 'C'){
        printf("a opção selecionada foi Configurar");
    }else if(texto == 's' || 'S'){
        printf("a opção selecionada foi Sair");
    } else {
        printf("opção invalida");
    }
  
    return 0;

}