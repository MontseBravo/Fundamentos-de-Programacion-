//diasdelmes//
#include <stdio.h>
#include <string.h>
int main(){
    printf("Ingrese un mes (1-12)y un año");
    int mes,año;
    char dias[6];
    scanf ("%d %d ", &mes,&año);
    if(mes==1,3,5,7,8,10,12){
        strcpy(dias,"31");
    }else if(mes==4,6,9,11){
        strcpy(dias,"30");
    }else
    if(año %4 == 0 && año %100 != 0 || año %400==0){
        strcpy(dias,"29");
    }
    printf("el mes tiene %s", dias,"\ndias");
}
