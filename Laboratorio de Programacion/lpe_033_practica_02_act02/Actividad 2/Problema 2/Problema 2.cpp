#include <stdio.h>
int main (void)
//   Universidad Autonoma de Nuevo Leon //
// Facultad de Ciencias Fisico-Matematico //
// 			Practica No.2				//
//	Alumno: Juan Manuel Martínez Ramírez //
{
float APROBADOS, REPROBADOS, SUMA, PA, PR, TOTAL;
printf("Programa de alumnos aprobados y reprobados."); 
printf("\n");
printf("\nEscribe el numero de alumnos aprobados: ");
scanf("%f", &APROBADOS);
printf("Escribe el numero de alumnos reprobados: ");
scanf("%f", &REPROBADOS);

SUMA = APROBADOS + REPROBADOS;
TOTAL = 100/SUMA;
PA = TOTAL * APROBADOS;
PR = TOTAL * REPROBADOS;

printf("\nEl total de alumnos en el aula es: %1.0f", SUMA);
printf("\nEl porcentaje de alumnos aprobados es: %1.2f", PA);
printf("\nEl porcentaje de alumnos reprobados es: %1.2f", PR);

printf("\n");

return 0;

}
