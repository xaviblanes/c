/************************************
    programa en C que que implementa
    funcions bàsiques sobre arrays
    Xavi Blanes curs:24/25
*************************************/

#include <stdio.h>


/* funció que llig un array d'enters de teclat */
void llegirArray(int a[])
{
  int i, n;
  i=0;
  do{
      printf("Introduix un enter (-127 per a acabar): \n");
      scanf("%d",&n);
      a[i++]=n;
  }while(n!=-127);
return;
}

/* funció que escriu un array d'enters per consola*/
void escriuArray(int a[])
{
  int i;
  i=0;
  while(a[i]!=-127)
  {
    printf("%d, ",a[i++]);
  }
  printf("\n");
return;
}

/* funció que calcula la llargada d'un array d'enters */
int llargArray(int a[])
{
  int i;
  i=0;
  while(a[i]!=-127)
    i++;
return i;
}

/* funció que calcula el màxim d'un array d'enters */
int maxArray(int a[])
{
  int maxProv, i;
  maxProv=a[0];
  i=1;
  while(a[i]!=-127)
  {
    if(a[i]>maxProv) maxProv=a[i];
    i++;
  }
return maxProv;
}

int main() {
  int myNumbers[100];
  llegirArray(myNumbers);
  escriuArray(myNumbers);
  printf("La longitud és: %d\n",llargArray(myNumbers));
  printf("El màxim és: %d\n",maxArray(myNumbers));
  return 0;
}
