
// Crie um programa am C que escreva o seu nome completo


#include <stdio.h> // biblioteca para o comando printf
#include <stdlib.h> // biblioteca para o comando system
#include <string.h>
#include <conio.h>

// int main(){
// 	printf("Bernardo Busatto");
//	system("pause");
//	return 0;
//}


// Crie um programa am C que escreva seu nome em uma linha e seu sobrenome em outra;

// int main(){
// 	printf("Bernardo\n Busatto");
//	system("pause");
//	return 0;
//}


    
    int main(void)
    {
      int i;
      
	//declarando e atribuindo valores no vetor de char
	//texto[7] usa 6 caracteres úteis + 1 caracter para o finalizador
      char texto[19] = "Bernardo Busatto";
      
	//percorrendo o vetor de char e printando
      for (i=0; i<19; i++)
      {
        printf("%c\n", texto[i]);
      }
      
      return 0;
    }

