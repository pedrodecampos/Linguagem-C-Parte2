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
printf("!! DIGITE QUANTOS n N�MEROS INTEIROS E POSITIVOS E VEJA O MAIOR, O MENOR E A M�DIA DOS N�MEROS DIGITADOS !!");
printf("\n");
printf("DIGITE UM N�MERO NEGATIVO PARA ENCERRAR");
printf("\n");
printf("Digite um n�mero: ");
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
printf("Digite um n�mero: ");
scanf("%d", &x);
}
media = (float) soma / cont;
printf("O menor n�mero digitado foi: %d", menor);
printf("\n");
printf("O maior n�mero digitado foi: %d", maior);
printf("\n");
printf("A m�dia dos n�meros digitados �: %.1f", media);
printf("\n");
printf("\n");
printf("FIM DO TESTE");
return ( 0 );
}
