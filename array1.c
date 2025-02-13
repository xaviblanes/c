#include <stdio.h>

int main() {

  int i;  
  int myNumbers[100];
  llegirArray(myNumbers);
  escriuArray(myNumbers);
  return;
}

void llegirArray(int *a[])
{
  int i, n;
  i=0;
  do{
      printf("Introduix un enter (-127 per a acabar): \n");
      scanf("%d",&n);
      a[i]=n;
  }while(n!=-127);

}

void escriuArray(int a[])
{
  int i;
  i=0;
  while(a[i]!=-127)
  {
    printf("%d, ",a[i++]);
  }
}
