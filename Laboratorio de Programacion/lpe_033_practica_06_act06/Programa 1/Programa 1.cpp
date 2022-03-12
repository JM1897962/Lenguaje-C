#include <stdio.h>
//   Universidad Autonoma de Nuevo Leon //
// Facultad de Ciencias Fisico-Matematico //
// 			Practica No.1				//
//	Alumno: Juan Manuel Martínez Ramírez //
int main()
{
	int num, i;
	
	printf("Escribe un numero: ");
	scanf("%d", &num);
	
	while(num!=1)
	{
		for(i=2; i<=num; i++)
		{
			while (num%i == 0)
			{	
				printf(" %d ", i);
				num = num / i;	
			}
		}
	}
	return 0;
}
