#include <stdio.h>
int main()
{
	int i=0, suma[11]={0}, mayor, numa, num, selec, iguales, igual, ig[11]={0};
	float porc, total;
	
	do
	{

		printf("Selecciona al votante que quieras añadir tus votos del 1 al 10:  ");
		scanf("%d", &i);
		
		if (i<11 && i>0)
			{
				printf("Escribe la cantidad de votos que quiere añadir al votante %d: ", i);
				scanf("%d", &num);
				suma[i]=suma[i]+num;
				total = total + num;	
			}
		else
			{
				printf("Numero incorrecto, presiona enter para continuar.");
				fflush(stdin);
				getchar();
			}			
		printf("\nDecide la opcion que deseas tomar.\n1)Agregar mas votos.\n2)Salir.\nSeleccionalo:");
		scanf("%d", &selec);
		printf("\n\n");	
							
	}while(selec == 1);
	
	for(i=1; i<11;i++)
			{
				if(i==0)
					{
						igual = suma[i];
						ig[i] = 0;
					}
					
				if (igual = suma[i])
					{
						igual = suma[i];
						ig[i] = i;
						iguales = iguales +1;
					}	
			}
	
	
	if(iguales = 0)
	{
		printf("\nAqui estan votos totales.\n");
		for(i=1; i<11;i++)
			{
				if(i==0)
					{
						mayor = 0;
						numa = 0;
					}
				
				printf("El votante %d tuvo %d votos.\n", i, suma[i]); 
				if (mayor<suma[i])
					{
						mayor = suma[i];
						numa = i;
					}	
			}
		
		printf("\nEl candidato numero %d es el ganador, con un total de %d votos, siendo su porcentaje %1.2f.", numa, mayor, porc);
		printf("\nEn total hubieron %1.0f de votos.", total);
		porc = (100/total)*mayor;
		printf("\nEl candidato numero %d es el ganador, con un total de %d votos, siendo su porcentaje %1.2f.", numa, mayor, porc);
	}
	
	else if (iguales > 0)
	{
		for(i=1; i<11;i++)
			{
				if (igual = suma[i])
					{
						printf("El votante %d tuvo %d votos.\n", i, suma[i]); 
					}	
			}
		
	}
	return 0;
}
