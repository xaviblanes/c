/**********************************
programa que implementa el problema
del pin amb repeticions ilimitades
Xavi Blanes 24/25
**********************************/

#include <stdio.h>
void main(){
int resposta;

do{
    printf("Pin?: ");
    scanf("%d", &resposta);
}while(resposta!=1234);

printf("Ok!\n");
return;
}
