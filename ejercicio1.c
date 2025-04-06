//calculadoraimpuestos//
#include <stdio.h> 
int main(){
    int salario_anual, impuesto;
    printf("Ingrese su salario anual:\n");
    scanf("%d",&salario_anual);
    if(salario_anual<=10000 ){
        impuesto= salario_anual * 0.05;
    }
    else if (salario_anual<=50000){
        impuesto= 10000*0.05 + (salario_anual-10000)*0.15;
    }
    else if (salario_anual>50000){
        impuesto=10000*0.05 + 40000*0.15 + (salario_anual-50000)*0.25;
    }
    printf("Impuesto a pagar:%d\n",impuesto);
}
