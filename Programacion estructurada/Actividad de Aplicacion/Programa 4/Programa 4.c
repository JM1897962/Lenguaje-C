#include <stdio.h>
#include <math.h>
int main()
{
    float radio, pi, diam, perim, area;
    printf("Escribe el radio del circulo: ");
    scanf("%f", &radio);
    pi = 3.1416;
    diam = radio * 2;
    perim = diam * pi;
    area = pi*pow(radio,2);
    
    printf("\nEl radio es %1.2f y su dimetro es %1.2f.", radio, diam);
    printf("\nEl radio es %1.2f y su perimetro es %1.2f.", radio, perim);
    printf("\nEl radio es %1.2f y su area es %1.2f.", radio, area);
     
    return 0;
    
}
