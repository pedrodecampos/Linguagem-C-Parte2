#include <stdio.h>
#include <conio.h>
int main() {
int n;
double s = 0;
printf("Digite o numero: ");
scanf("%d", &n);
for (int i = 0; i < n; i++) {
s = s + pow((-1), i) * (i + 1) / (n - i);
}
printf("O resultado final e: %f", s);
return 0;
}
