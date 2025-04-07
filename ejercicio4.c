//niveldeusuario//
#include <stdio.h>
#include <string.h>
int main(){
    int puntos;
    char nivel[15];
    printf("Ingrese sus puntos de experiencia:\n");
    scanf("%d",&puntos);
    if(puntos<100){
        strcpy(nivel,"novato");
    }else if (puntos<500 && puntos>100){
        strcpy(nivel,"Intermedio");
    }else if (puntos>500 && puntos<1000){
        strcpy(nivel,"Avanzado");
    }else if(puntos>1000){
        strcpy(nivel,"Experto");
    } 
    printf("Tu nivel es:%s\n", nivel);
}
