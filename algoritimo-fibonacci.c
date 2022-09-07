#include <stdlib.h>
int main()
{
int i, resultado, sequencia, anterior, anterior2;
printf("Digite quanto numeros voce quer da sequencia: \n");
scanf("%d",&sequencia);
anterior = 1;
anterior2 = 1;
// anterior 1 2
// anterior2 1 2
// resultado 2 2
for(i = 3; i <=sequencia; i++){
resultado = anterior + anterior2;
anterior = anterior2;
anterior2 = resultado;
printf("%d - %d \n",i,resultado);
}
return 0;
}
