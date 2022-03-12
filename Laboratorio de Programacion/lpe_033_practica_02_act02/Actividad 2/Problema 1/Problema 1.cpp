#include <stdio.h>
int main (void)
//   Universidad Autonoma de Nuevo Leon //
// Facultad de Ciencias Fisico-Matematico //
// 			Practica No.1				//
//	Alumno: Juan Manuel Martínez Ramírez //
{
float LADO, AREA = 0, PER = 0;
printf("El area y perimetro de un cuadrado."); 
printf("\n");
printf("\nEscribe el lado de un cuadrado: ");
scanf("%f", &LADO);

AREA = LADO*LADO;
PER = LADO * 4;
printf("\nEl area del cuadrado es: %1.2f", AREA);
printf("\nEl perimetro del cuadrado es: %1.2f", PER);

printf("\n");

return 0;

}
