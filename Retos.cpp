// Retos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>

int main() 
{
    float lado, area;

    printf("Ingrese la longitud del lado del cuadrado: ");
    scanf("%f", &lado);

    // Calcula el área del cuadrado
    area = lado * lado;

    printf("El área del cuadrado es: %.2f\n", area);

    return 0;
}
