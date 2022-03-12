#include <stdio.h>
#include <math.h>
int main (void)
//   Universidad Autonoma de Nuevo Leon //
// Facultad de Ciencias Fisico-Matematico //
// 			Practica No.3				//
//	Alumno: Juan Manuel Martínez Ramírez //
{
float VELOCIDAD, ALTURA, GRAVEDAD ;
printf("Programa con la que se mide la velocidad de un objeto llega al piso."); 
printf("\n");
printf("\nEscribe la altura: ");
scanf("%f", &ALTURA);

GRAVEDAD = 9.81;
VELOCIDAD = sqrt(2*GRAVEDAD*ALTURA);

printf("\nLa velocidad final es: %1.2f", VELOCIDAD);

printf("\n");

return 0;

}
