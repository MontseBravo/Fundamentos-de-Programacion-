#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    float distancia, tiempo, costo, prioridad = 0.0;
    bool perecedero, riesgo;
    char rutaOptima[100];
    char entrada;
    printf("Distancia (km): ");
    scanf("%f", &distancia);

    printf("Tiempo estimado (hrs): ");
    scanf("%f", &tiempo);

    printf("Costo operativo: ");
    scanf("%f", &costo);

    printf("¿Carga perecedera? (V/F): ");
    scanf(" %c", &entrada);
    perecedero = (entrada == 'V' || entrada == 'v');

    printf("¿Material de riesgo? (V/F): ");
    scanf(" %c", &entrada);
    riesgo = (entrada == 'V' || entrada == 'v');
    if (riesgo) {
        strcpy(rutaOptima, "RUTA SEGURA (Evitar zonas pobladas)");
    } else {
        if (perecedero && tiempo > 6) {
            strcpy(rutaOptima, "RUTA RÁPIDA (Priorizar tiempo sobre costo)");
        } else if ((costo / distancia) > 2.5 && !perecedero) {
            strcpy(rutaOptima, "RUTA ECONÓMICA (Minimizar costos)");
        } else if (distancia < 50 && tiempo < 1.5) {
            strcpy(rutaOptima, "RUTA DIRECTA");
        } else {
            if (perecedero) {
                prioridad += tiempo * 0.7;
            } else {
                prioridad += tiempo * 0.3;
            }

            prioridad += (costo * 0.4) - (distancia * 0.1);

            if (prioridad < 2.5) {
                strcpy(rutaOptima, "RUTA BALANCEADA");
            } else {
                strcpy(rutaOptima, "RUTA PERSONALIZADA - Análisis adicional");
            }
        }
    }
    printf("\nRuta óptima: %s\n", rutaOptima);

    return 0;
}
