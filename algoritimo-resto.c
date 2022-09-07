#include <stdio.h>
#include <conio.h>
#define dez 10000
#define nov 99999
main(){
int a1, a2, a3, a4, a5;
for( int r=dez ; r<=nov ; r++ ){
a1 = r/ 10000;
a1 = a1%10;
a2 = r/ 1000;
a2 = a2%10;
a3 = r/ 1000;
a3 = a3%10;
a4 = r /100;
a4 = a4%10;
a5 = r% 10;
if((a1 + (a2*10) + (a3*100) + (a4*1000) + (a5*10000) == r )){
printf(" %d \n", r);
}
}
getch();
}
