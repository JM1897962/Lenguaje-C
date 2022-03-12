#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	int num[4][4], i , j, colu, fila, mayor, menor;
	
	for(i=0; i<4; i++)
		{
			if(i==0)
				{
					colu = 0;
					mayor = 0;
				}
				
			for(j=0;j<4; j++)
				{
					printf("Ingresa el numero[%d][%d]: ", i+1,j+1);
					scanf("%d", &num[i][j]);
					
					if(num[i][j]>mayor)
						{
							mayor = num[i][j];
							colu = j+1;
						}
						
					if(j==0 && i==0)
						{
							menor = num[i][j];
							fila = i+1;
						}
						
					else if(num[i][j]<menor)
						{
							menor = num[i][j];
							fila = i+1;
						}
				}
		}
	
	printf("\n\n");
	
	for(i=0; i<4; i++)
		{
			for(j=0;j<4; j++)
				{
					printf("%d\t", num[i][j]);
					
				}
				printf("\n");
		}
	
	printf("\n\nEl numero mayor de la columna %d, es %d.\n", colu, mayor);
	printf("El numero menor de la fila %d, es %d.", fila, menor);
	
	return 0;
	
}


