#include "array_dinamico.h"

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>


void menu() { 

   int tamanho = 4; //vamos começar com um tamanho fixo e depois vamos dobrando o seu tamanho.  

   bool ordenado = false; 
  
   Array_Dinamico *array_dinamico = criar_array_dinamico(tamanho, ordenado);
    
   Aluno *aluno01 = criar_aluno(88, "Ederson Schmeing");

   adicionar_array_dinamico(array_dinamico, aluno01);

   Aluno *aluno_do_array = buscar_aluno(array_dinamico, 0);

   imprime_aluno(aluno_do_array);

   destruir_array_dinamico(&array_dinamico);

}


int main(int argc, char *argv[]) {
    
   printf("quantidade de parâmetros, %s\n", argv[1]);
    
   for (int i = 0; i < argc; i++)
   {
      printf("%s\n", argv[i]);
   } 

   menu();

   return 0;

} 