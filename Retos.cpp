// Retos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <stdio.h>

int main()
{
    // Definir una variable para almacenar el Radio del Circulo
    double Radio;

    // Solicitar al usuario que ingrese el Radio del Circulo
    printf("Ingrese el Radio del Circulo: ");
    scanf_s("%lf", &Radio);

    // Calcular el Area del Circulo usando la formula: Area = pi * Radio * Radio
    double Area = 3.14159265359 * Radio * Radio;

    // Mostrar el resultado
    printf("El Area del Circulo con radio %.2lf es %.2lf\n", Radio, Area);

    return 0;
}
