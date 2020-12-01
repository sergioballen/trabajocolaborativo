#include <stdio.h>

char cadena[1000];
int longitudDeseada;
char relleno[1000];


void llenarporIzquierda();
void llenarporDerecha();

int main() {
    printf("Ingrese la frase a rellenar \n");
    fgets(cadena, 1000, stdin);

    printf("Ingrese el relleno de la frase \n");
    fgets(relleno, 1000, stdin);

    printf("Ingrese la longitud final deseada \n");
    scanf("%d", &longitudDeseada);

    printf("Original: %s\n", cadena);
    llenarporIzquierda();
    llenarporDerecha();

    return 0;
}

void llenarporDerecha(){

    char cadenaRellena[longitudDeseada + 1];// Aquí almacenamos el resultado. Debe ser lo suficientemente larga
// Obtener la diferencia de longitud
    int diferencia = longitudDeseada - (int) strlen(cadena) + 1;
    sprintf(cadenaRellena, "%*.*s%s ", diferencia, diferencia, cadena, relleno);
    printf("Rellena por Derecha:\n %s", cadenaRellena);
};

void llenarporIzquierda(){

    char cadenaRellena[longitudDeseada + 1];// Aquí almacenamos el resultado. Debe ser lo suficientemente larga
// Obtener la diferencia de longitud
    int diferencia = longitudDeseada - (int) strlen(cadena)+1;
    sprintf(cadenaRellena, "%*.*s%s ", diferencia, diferencia, relleno, cadena);
    printf("Rellena por Izquierda: %s", cadenaRellena);
};


