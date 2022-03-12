#include <stdio.h>
int main()
{
    float temp, tempf;
    printf("Escribe la temperatura en grados Celsius: ");
    scanf("%f", &temp);
    tempf = temp * 3.93;
    
    
    printf("\nLa temperatura %1.2f grados Celsius a  grados Farhenheit es %1.2f grados Farhenheit.", temp, tempf);
    
    return 0;
    
}
