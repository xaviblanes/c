/*******************************************
 * problema clàssic del factorial recursiu *
 * Curiositat: 170 és el màxim factorial   * 
 * representable amb double. Prova-ho      *
 * Xavi Blanes curs: 24/25                 *
 * ****************************************/

#include <stdio.h>

double factorial(int n);

void main(){
    int n;
    printf("Introduix un número i et calcularé el factorial: ");
    scanf("%d", &n);
    printf("%f\n", factorial(n));
    return;
}

double factorial(int n){
    double fact;
    if(n == 0) fact = 1;
    else fact = n*factorial(n-1);
    return fact;
}
