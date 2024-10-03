/*************************************
programa en C que sobre ifs imbrincats
diu si un any és de traspàs o no
Xavi Blanes curs 24/25
*************************************/

#include <stdio.h>
int main(){
int any;
printf("Any??: ");
scanf("%d", &any);
if(any%4 != 0)
  printf("No");
else if(any%100 != 0)
        printf("Sí");
     else if(any%400 != 0)
            printf("No");
          else printf("Sí");
printf("\n");
return 0;
}
