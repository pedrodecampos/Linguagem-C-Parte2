#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int main ( )
{
setlocale(LC_ALL,"");
srand(time(NULL));
int usuario, tentativa, teste, cont;
int inicio, fim;
inicio = 1;
fim = 500;
cont = 0;
printf("!! 10 Tentativas !!");
printf("\n");
printf(" numero entre 1 e 1023: ");
scanf("%d", &usuario);
while(usuario < inicio || usuario > fim){
printf("numero invalido!");
printf("numero entre 1 e 1023:: ");
scanf("%d", &usuario);
}
for(int i = 0; i < 10; i++){
tentativa = rand() % (fim - inicio - 1) + inicio + 1;
printf("O número encontrado foi: %d", tentativa);
printf("\n");
printf("Digite 0 para igual, 1 para menor ou 2 para maior que seu número: ");
scanf("%d", &teste);
if(teste == 0){
printf("\n");
printf("o programa acj");
i = 10;
cont = cont + 1;
}
else if(teste == 1){
inicio = tentativa;
cont = cont + 1;
}
else if(teste == 2){
fim = tentativa;
cont = cont + 1;
}
printf("\n");
//printf("%d", inicio);
printf("\n");
//printf("%d", fim);
//printf("\n");
}
printf("o programa nao encontrou.");
getch();
return ( 0 );
}
