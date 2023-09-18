// Retos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>

int main()
{
    int area;
    int altura;
    int base;
    printf("Altura:");
    scanf_s("%i", &altura);
    printf("Base:");
    scanf_s("%i", &base);
    area = base * altura;
    printf("El cuadrado de %i x %i tiene area de %i", base, altura, area);
}
