#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
   int n,n1,n2,n3,nv,aux;

   
   printf("Informe um valor inteiro de 3 digitos: ");
   scanf("%d",&n);
   n1 = n/100;
   aux = n%100;
   n2 = aux / 10;
   n3 = aux % 10;
   nv = n3*100 + n2*10 + n1 ;

   printf("O numero lido foi %d e seu inverso eh %d.",n,nv);
   getch();
}
