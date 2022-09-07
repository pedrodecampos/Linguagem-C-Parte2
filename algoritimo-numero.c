#include <stdio.h>
#include <stdlib.h>

int main()
{
for (int i = 1000; i <= 9999; i++)
{
if (i == (i / 100 + i % 100) * (i / 100 + i % 100))
printf("Numero encontrado: %d\n", i);
}
return 0;
}
