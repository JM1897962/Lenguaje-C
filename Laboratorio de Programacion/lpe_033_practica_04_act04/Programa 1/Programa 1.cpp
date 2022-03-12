#include <stdio.h>
int main()
//   Universidad Autonoma de Nuevo Leon //
// Facultad de Ciencias Fisico-Matematico //
// 			Practica No.1				//
//	Alumno: Juan Manuel Martínez Ramírez //
{
	int dia, mes, anio, dif;
	printf("\t\tFechas seleccionadas.\n\n");
	printf("Escribe el a%cio que quieras saber: ", 164);
	scanf("%d", &anio);
	printf("Escibe el dia del que quieras seleccionar: ");
	scanf("%d", &dia);
	printf("Selecciona el mes que deseas saber el dia:\n");
	printf("1)Enero\n2)Febrero\n3)Marzo\n4)Abril\n5)Mayo\n6)Junio\n7)Julio\n8)Agosto\n9)Septiembre\n10)Octubre\n11)Noviembre\n12)Diciembre");
	printf("\n\nSeleccionalo: ");
	scanf("%d", &mes);
	
	printf("\n\n");
	
	if(dia <=31)
	{
	if(mes <=12)
	{
	switch(mes)
	{
		if(dia<=31)
		{
			case 1: printf("Tu fecha es Enero-%02d de %d.",dia, anio);
			break;
			case 3: printf("Tu fecha es Marzo-%02d de %d.",dia, anio);
			break;
			case 5: printf("Tu fecha es Mayo-%02d de %d.", dia, anio);
			break;
			case 7: printf("Tu fecha es Julio-%02d de %d.", dia, anio);
			break;
			case 8: printf("Tu fecha es Agosto-%02d de %d.", dia, anio);
			break;
			case 10: printf("Tu fecha es Octubre-%02d de %d.",dia, anio);
			break;
			case 12: printf("Tu fecha es Diciembre-%02d de %d.",dia, anio);
			break;
		}
		
		else if (dia<=30)
		{
			case 4: printf("Tu fecha es Abril-%02d de %d.",dia, anio);
			break;
			case 6: printf("Tu fecha es Junio-%02d de %d.", dia, anio);
			break;
			case 9: printf("Tu fecha es Septiembre-%02d de %d.", dia, anio);
			break;
			case 11: printf("Tu fecha es Noviembre-%02d de %d.",dia, anio);
			break;
		}
		
		else if (dia <= 28)
		{
			case 2: printf("Tu fecha es Febrero-%02d de %d.", dia, anio);
			break;
		}
	}
	}
	else
	{
		printf ("Escribe bien el mes.");
	}
	}
	else
	{
		printf ("Escribe bien los dias.");
	}
	
	return 0;
	
}
