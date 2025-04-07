//validarcontraseña//
#include <stdio.h>
#include <string.h>
int main(){
    char contrasena[8];
    char confirmacion[8];
    int valido;
    printf("Ingrese su contraseña: ");
    scanf(contrasena, sizeof(contrasena), stdin);
    strcpy(contrasena, "\n"); 
    printf("Confirme su contraseña: ");
    scanf(confirmacion, sizeof(confirmacion), stdin);
   strcpy (confirmacion, "\n"); 
    if ((contrasena, confirmacion) == 0 && strlen(contrasena) >= 8) {
        valido = 1;
    } else {
        valido = 0;
    } if (valido) {
        printf("Contraseña válida\n");
    } else {
        printf("Contraseña inválida\n");
    }

     return 0;

}
