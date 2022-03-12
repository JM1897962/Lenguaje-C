#include <stdio.h>
//   Universidad Autonoma de Nuevo Leon //
// Facultad de Ciencias Fisico-Matematico //
// 			Practica No.2				//
//	Alumno: Juan Manuel Martínez Ramírez //
int main()
{
	int num, suma, ant = 0;
	char duda;
	
	do
	{
		printf("Ingresa un numero: ");
		scanf("%d", &num);
		
		if (num > ant)
			{
				suma = suma + num;
				ant = num;
			}
			
		else if(num < ant)
			{
				printf("Quieres seguir con el codigo, presiona S para seguir o N para salir: ");
				fflush(stdin);
				scanf("%c", &duda);
				
				if (duda == 'S')
					{
						printf("\nContinua\n");
					}
				
				else if (duda == 'N')		 
					{
						printf("\nLa suma es %d\n", suma);
						return 0;
					}
			}	
			}while(num!=0);
}
