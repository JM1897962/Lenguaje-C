#include <stdio.h>
int main()
{
    int num1, num2, num3, suma, mult, prom;
    printf("Escribe los tres numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    suma = num1 + num2 + num3;
    mult = num1 * num2 * num3;
    prom = suma / 3;
    
    printf("\nLa suma de %d, %d y %d es %d.", num1, num2, num3, suma);
    printf("\nLa multiplicacion de %d, %d y %d es %d.", num1, num2, num3, mult);
    printf("\nEl promedio de %d, %d y %d es %d.", num1, num2, num3, prom);
    
    return 0;
    
}
