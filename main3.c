
#include <stdio.h>
// calcular el area de  un rectangulo datos de entrada : base y altura 
int main  () {
    float base, altura;
    printf("ingrese la altura y la base del rectangulo\n ");
    scanf("%f",&altura);
    scanf("%f",&base);
    float area= base*altura;
    printf("El area es: %0.2f",area);
    return 0 ;
}