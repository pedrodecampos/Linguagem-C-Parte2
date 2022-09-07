#include <stdio.h>
#include <stdlib.h>
int main()
{
int fatorial;
int resposta = 1;
printf ("Digite o valor para fatorar: \n");
scanf("%d",&fatorial);

for ( ; fatorial >= 1; --fatorial){
resposta = resposta * fatorial;
}
printf(" O numero fatorial e %d",resposta);
return 0;
}
