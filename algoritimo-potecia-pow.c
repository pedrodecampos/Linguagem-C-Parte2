#include <stdio.h>>
#include <math.h>
int main() {
int termos;
double s = 0, p1, p2;
printf("Digite um numero: ");
scanf("%d", &termos);
for (int i = 0; i < termos; i++) {
p1 = pow((-1), i);
p2 = (pow((1 + 2 * i), 3));
s = s + p1 / p2;
}
printf("O resultado final e: %f", s);
return 0;
}
