/***********************************
programa en C que pinta con una vela
Xavi Blanes curs 24/25
***********************************/

#include <stdio.h>
int main(){
  int i, j;
  for(i=1;i<=10;i++)
  {
    for(j=1;j<=10;j++)
    {
      if(j<=i) printf("W");
      else printf(".");
    }
  printf("\n");
  }
  return 0;
}
