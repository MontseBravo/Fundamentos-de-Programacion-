//clasificador de triangulos//
#include <stdio.h>
#include <string.h>
int main(){
    int lado1, lado2, lado3;
    char tipo[15];
    printf("Ingrese los 3 lados del triángulo:");
    scanf("%d  %d  %d", &lado1,&lado2,&lado3);
    if(lado1 + lado2 > lado3 && lado2+lado3 >lado1 && lado1 +lado3 >lado2){
       if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
          strcpy(tipo,"isoceles"); 
       }
    }else if (lado1 == lado2 && lado2 == lado3){
        strcpy(tipo,"equilatero");
    }else {
        strcpy(tipo,"escaleno");
    }
    printf("El triangulo es %s.\n",tipo);
    return 0;
}
