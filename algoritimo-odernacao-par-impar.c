#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <locale.h>
int main ( )
{
setlocale(LC_ALL,"");
int x, cont, menor, maior, soma;
float media;
cont = 0;
x = 0;
soma = 0;
media = 0;
printf("!! DIGITE QUANTOS n NÚMEROS INTEIROS E POSITIVOS E VEJA O MAIOR, O MENOR E A MÉDIA DOS NÚMEROS DIGITADOS !!");
printf("\n");
printf("DIGITE UM NÚMERO NEGATIVO PARA ENCERRAR");
printf("\n");
printf("Digite um número: ");
scanf("%d", &x);
menor = x;
maior = x;
while(x >= 0){
if(x < menor){
menor = x;
}
if(x > maior){
maior = x;
}
cont++;
soma = x + soma;
printf("Digite um número: ");
scanf("%d", &x);
}
media = (float) soma / cont;
printf("O menor número digitado foi: %d", menor);
printf("\n");
printf("O maior número digitado foi: %d", maior);
printf("\n");
printf("A média dos números digitados é: %.1f", media);
printf("\n");
printf("\n");
printf("FIM DO TESTE");
return ( 0 );
}
