#include <stdio.h>
#include <string.h>


int main () {
    
    char aux[100]={"aaa"}, palavra[100];
    int i, j, tamanho;
     
     
    printf("Escreva uma palavra: ");
    scanf("%s",&palavra);
    tamanho = strlen(palavra);
    
    j=tamanho -1;
    for(i=0;i<tamanho;i++){
  
     aux[j]=palavra[i];
     j--;
           
        }
        
  
    printf("Palavra invertida: %s",aux);
   
    
    
    
    
    
    return 0;
    }