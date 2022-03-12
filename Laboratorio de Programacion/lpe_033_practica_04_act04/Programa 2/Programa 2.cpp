#include <stdio.h>
int main()
//   Universidad Autonoma de Nuevo Leon //
// Facultad de Ciencias Fisico-Matematico //
// 			Practica No.2				//
//	Alumno: Juan Manuel Martínez Ramírez //
{
	float sueldo;
	printf("\t\tSueldos.\n\n");
	printf("Escribe tu sueldo: ");
	scanf("%f", &sueldo);
	
	printf("\n\n");
	if (sueldo > 0 && sueldo <= 9000)
	{
		printf("Tu anterior sueldo era $%1.2f y ahora es $%1.2f gracias al 20 porciento extra.", sueldo, sueldo+(sueldo*.2));
	}
	
	else if(sueldo > 9000 && sueldo<=15000)
	{
		printf("Tu anterior sueldo era $%1.2f y ahora es $%1.2f gracias al 10 porciento extra.", sueldo, sueldo+(sueldo*.1));
	}
	
	else if(sueldo > 15000 && sueldo<=20000)
	{
		printf("Tu anterior sueldo era $%1.2f y ahora es $%1.2f gracias al 5 porciento extra.", sueldo, sueldo+(sueldo*.05));
	}
	
	else if(sueldo > 20000)
	{
		printf("Tu anterior sueldo era $%1.2f y ahora es $%1.2f gracias al 3 porciento extra.", sueldo, sueldo+(sueldo*.03));
	}
	
	printf("\n");
	return 0;
	
}
