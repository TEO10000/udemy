//conversion de Euros a pesetas
#include <stdio.h>

int main () {
    float euros;
    printf("Introduzca los euros que quieres convertir\n");
    scanf("%f",&euros);
    printf("%0.2f euros equivalen a %0.2f en pesetas ",euros,euros*166,386);

    return 0;
}