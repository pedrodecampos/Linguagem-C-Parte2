
#include <stdio.h>
#include <stdlib.h>
int main()
{
int qi = 0, qp = 0,x = 0;
while (x != 9999){
printf("Digite um Numero:\n");
scanf("%D",&x);

if (x % 2 == 0)
{
qp++;
}
else if (x % 2 == 1 && x != 9999)
{
qi++;
}
}
printf("Qnt De Numero par = %d e impar = %d", qp,qi);
return 0;
}
