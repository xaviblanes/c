/************************************
programa en C que que implementa
funcions bàsiques sobre arrays
Xavi Blanes curs:24/25
*************************************/

#include <stdio.h>

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

int llargArray(int a[])
{
  int i;
  i=0;
  while(a[i]!=-127)
    i++;
return i;
}

int main() {
  int myNumbers[100];
  llegirArray(myNumbers);
  escriuArray(myNumbers);
  printf("La longitud és: %d\n",llargArray(myNumbers));
  return 0;
}
