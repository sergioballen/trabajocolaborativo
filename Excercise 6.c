#include <stdio.h>



void removerCaracteres(char *cadena, char *caracteres);
char cadena[1000];
char caracteres[1000];

int main() {
    printf("Ingrese la frase a cambiar \n");
    fgets(cadena, 1000, stdin);
    printf("Ingrese el caracter a Eliminar \n");
    fgets(caracteres, 1000, stdin);
    printf("La frase es: '%s'\n", cadena);
    printf("Y el caracter que se quita es: %s\n", caracteres);
    removerCaracteres(cadena, caracteres);
    printf("Despues de remover, la frase es: '%s'\n", cadena);
    return 0;
}

void removerCaracteres(char *cadena, char *caracteres) {
    int indiceCadena = 0, indiceCadenaLimpia = 0;
    int deberiaAgregarCaracter = 1;
    while (cadena[indiceCadena]) {
        deberiaAgregarCaracter = 1;
        int indiceCaracteres = 0;
        while (caracteres[indiceCaracteres]) {
            if (cadena[indiceCadena] == caracteres[indiceCaracteres]) {
                deberiaAgregarCaracter = 0;
            }
            indiceCaracteres++;
        }
        if (deberiaAgregarCaracter) {
            cadena[indiceCadenaLimpia] = cadena[indiceCadena];
            indiceCadenaLimpia++;
        }
        indiceCadena++;
    }
    cadena[indiceCadenaLimpia] = 0;
}