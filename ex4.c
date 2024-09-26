#include <stdio.h>
#include <string.h>





int main() {
char palavra[30],aux[30];
int tamanho, i , j;

printf("Escreva uma palavra:    ");
scanf("%s",&palavra);    
    
   tamanho = strlen(palavra);
    
    j=tamanho -1;
    for(i=0;i<tamanho;i++){
  
     aux[j]=palavra[i];
     j--;
           
        }
    if(strcmp(aux,palavra)==0)
    printf("Sua palavra e um palidromo");
    else
    printf("Sua palavra nao e um palindromo");
    
    
    
    return 0;
    }