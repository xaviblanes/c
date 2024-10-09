/*****************************************************
    programa que calcula les rels de la ecuació
    de 2n grau
    IMPORTANT: compilar amb $ gcc -o segon segon.c -lm
    Xavi Blanes curs 24/25
*****************************************************/

#include <stdio.h>
#include <math.h>

void main(){
float a, b, c, discriminant;
printf("Coeficient de la X²: ");
scanf("%f", &a);
printf("Coeficient de la X: ");
scanf("%f", &b);
printf("Terme independent: ");
scanf("%f", &c);

if(a == 0) printf("Si a és 0 no es una ecuació de 2n grau!!\n");
else{
        discriminant = (b*b)-(4*a*c);
        if(discriminant < 0) printf("La equació de 2n grau no té solucions!!\n");
        if(discriminant == 0) printf("La equació de 2n grau té solució única i és: %f\n", (-1*b)/(2*a));
        if(discriminant > 0) printf("La equació de 2n grau no té dues solucions: %f, %f\n", 
        ((-1*b)+sqrt(discriminant))/(2*a), ((-1*b)-sqrt(discriminant))/(2*a));
    }
return;
}
