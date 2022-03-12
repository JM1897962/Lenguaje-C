#include <stdio.h>
int main()
//   Universidad Autonoma de Nuevo Leon //
// Facultad de Ciencias Fisico-Matematico //
// 			Practica No.2				//
//	Alumno: Juan Manuel Martínez Ramírez //
{
	int edad;
	char nom[50];
	
	printf("Escribe tu nombre: ");
	scanf("%s", &nom);
	printf("Escribe tu edad: ");
	scanf("%d", &edad);
	
	if(edad >= 0 && edad <= 10)
	{
		printf("%s eres un ni%co.", nom, 164);
	}
	
	else if (edad > 10 && edad <= 30)
	{
		printf("%s eres un joven.", nom);
	}
	
	else if (edad < 30)
	{
		printf("%s eres un adulto.", nom);
	}
		
	return 0;
}
