#include <stdio.h>
int main()
{
	int tie, dis;
	float precio;
	
	printf("Escribe la cantidad de dias que te quedaras en tus vacaciones: ");
	scanf("%d",&tie);
	printf("Escribe la distancia que viajaras: ");
	scanf("%d", &dis);
	
	precio = dis * 21.19;
	
	if ( tie > 5 )
		{
			if ( dis > 600)
				{
					printf("\nEl coste total es: %1.2f", precio-(precio*.15));
				}
		}
	
	else
		{
			printf("\nEl coste total del viaje es: %1.2f", precio);
		}
	return 0;
}
