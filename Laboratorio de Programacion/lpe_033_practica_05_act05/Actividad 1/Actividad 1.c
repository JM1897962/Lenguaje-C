#include <stdio.h>
int main()
//   Universidad Autonoma de Nuevo Leon //
// Facultad de Ciencias Fisico-Matematico //
// 			Practica No.1				//
//	Alumno: Juan Manuel Martínez Ramírez //
{
	int i, j, k, e, num; 
	
	printf("Escribe el numero de asteriscos que quieres en tu triangulo: ");
	scanf("%d", &num);
	
	
	printf("\n\n\tTriangulo invertido.\n");
	if (num > 1 && num < 15)
	{
		for(j=1; j<=15; j++)
		{
				printf("\n");
				for(i=1; i<=num; i++)
				{
					printf("*");
				}
				num = num - 1;
		}
	}
	
	
	printf("\n\n\tTriangulo ordenado.\n");
	if (num = 1 && num < 15)
		for(k=1; k<=14; k++)
		{
				printf("\n");
				for(e=1; e<=num; e++)
				{
					printf("*");
				}
				num = num + 1;
		}
	
	else
		printf("\n\nTienes un error, vuelve a anotar los numeros.");
		
	

	return 0;
}
