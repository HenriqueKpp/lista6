#include<stdio.h>
#include <string.h>

char nums[]= {'0','1','2','3','4','5','6','7','8','9'};

char min[]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

char mai[]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

int main(){
char senha[150];
int carac;
int i,j,teste1 =0,teste2 =0,teste3 = 0;

printf("\t*******CRIE SUA SENHA********\n\n");
printf("\nEscreva sua senha: ");
scanf("%s",&senha);
carac = strlen(senha);

if(carac>100){
    printf("\nSenha invalida! Deve ser menor que 100 caracteres."); 
    return 0;
}
for(i=0;i<carac;i++){
    for(j=0;j<26;j++){
if(min[j]== senha[i])
teste1++;
if(mai[j]==senha[i])
teste2++;
}
}
for(i=0; i<carac;i++){
        for(j=0;j<10;j++){
if(nums[j]== senha[i])
teste3++;
        }
}
if(teste1 == 0 ){
printf("\nO valor precisa ter no minimo 1 letra minuscula, senha invalida");
return 0;
}
if(teste2 == 0 ){
printf("\nO valor precisa ter no minimo 1 letra maiuscula, senha invalida");
return 0;
}
if(teste3 == 0 ){
printf("\nO valor precisa ter no minimo 1 numero, senha invalida");
return 0;
}
printf("Senha cadastrada com sucesso!");

    return 0;
}