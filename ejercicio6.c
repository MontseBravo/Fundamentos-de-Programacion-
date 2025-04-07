#include <stdio.h>
#include <stdbool.h>

int main() {
    float monto, descuento;
    bool esClienteFrecuente;
    int entradaCliente;
    printf("Ingrese monto de compra: ");
    scanf("%f", &monto);
    printf("¿Es cliente frecuente? (1 = Sí, 0 = No): ");
    scanf("%d", &entradaCliente);
    esClienteFrecuente = entradaCliente == 1;
    if (monto > 1000) {
        if (esClienteFrecuente) {
            descuento = 0.25;
        } else {
            descuento = 0.15;
        }
    } else {
        if (monto > 500) {
            descuento = 0.05;
        } else {
            descuento = 0;
        }
    printf("Descuento aplicado: %.0f%%\n", descuento * 100);
    printf("Total a pagar: $%.2f\n", monto * (1 - descuento));

    return 0;
}
    }
