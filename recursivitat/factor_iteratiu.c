/*******************************************
 * problema clàssic del factorial iteratiu *
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
    int i;
    double fact = 1;
    for(i=1;i<=n;i++) fact = fact*i;
    return fact;
}
