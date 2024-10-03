/************************************
programa en C que avalua si un número 
introduït per teclat és capicua   
Xavi Blanes curs:24/25              
*************************************/

#include <stdio.h>
#include <stdlib.h>
int main(){
int n,      /* número llegit a avaluar */
    unitats, /* les unitats de aux */
    reves=0, /* serà n al revés */
    aux;     /* un número auxiliar per a donar la volta a n */   

   printf("Dona'm un número: ");
   scanf("%d",&n);
     
   /* pose al revés n */
   aux=n;   
   while(aux!=0){
      unitats=aux%10;
      reves=reves*10+unitats;
      aux=aux/10;
   }
   
   /* compare n i reves */
   if(n==reves) printf("El número %d és capicua\n",n);
   else printf("El número %d no és capicua\n",n);
   
   getchar();
}    
