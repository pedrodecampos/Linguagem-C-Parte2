#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> //necessário p/ função time()
int main(){
srand(time(NULL));
int s,i;
printf("Digite 0 para cara e 1 para coroa: ");
scanf("%d", &s);
for(i = 0; i < 10;i++)
{
if (rand() %2 == s){
printf("voce venceu\n");
}
else {
printf("voce perdeu\n");
}
}
return 0;
}
