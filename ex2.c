#include<stdio.h>
#include <string.h> 


char strg[1000];
int i=0,j;
int caract = 0;
int carac, contagem = (-1), diff;
char k[]={"\0"};
int main() {

printf("\nEscreva uma sequencia de caracteres: ");
scanf("%s",&strg);

carac = strlen(strg);
printf("\nA) Quantidade de caracteres pelo 'STRLEN': %d",carac);

while(caract !=(-1)){
if(strcmp(strg+i,k) == 0){
caract= -1;
}
i++;
contagem++;
}
printf("\nB) Quantidade de caracteres sem usar o 'STRLEN': %d",contagem);
diff= contagem - carac;
printf("\nC) Comparando os 2 metodos, a diferenca de resultado foi igual a: %d ",diff);

    return 0;
}