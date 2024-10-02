/**********************************
programa que implementa el problema
del pin amb 3 repeticions
Xavi Blanes 24/25
**********************************/

#include <stdio.h>
void main(){
int resposta;
int errades;
errades = 0;
do{
    printf("Pin?: ");
    scanf("%d", &resposta);
    if(resposta!=1234) errades++;
}while((resposta!=1234)&&(errades<3));
if(resposta==1234)
     printf("Ok!\n");
else printf("Sistema bloquejat!\n");
return;
}
