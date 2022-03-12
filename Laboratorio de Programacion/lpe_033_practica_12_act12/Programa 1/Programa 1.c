#include<stdio.h>
#include<conio.h>

void llenado(int tamanio, int *arreglo);
void ordenar(int ordenar, int *ascendente);

int main()
{
	int i;
	
	printf("Ingresa cuantos numeros quieres: ");
	scanf("%d", &i);
	
	int num[i], j, x, a;
	
	llenado(i, num);
	
	printf("\n\n");
	
	for(j=0; j<i; j++)
		{
			printf("El numero %d, siendo este el numero %d.\n", j+1, num[j]);
		}
		
	ordenar(i, num);
	
	printf("\n\nAscendente.\n");	
			
	for(j=0; j<i ; j++)
		{
			printf("El numero %d, siendo este el numero %d.\n", j+1, num[j]);
		}
		
	printf("\n\nDescendente.\n");
	
	for(j=0; j<i ; j++)
		{
			printf("El numero %d, siendo este el numero %d.\n", j+1, num[(i-1)-j]);
		}

	return 0;
}

void llenado(int tamanio, int *arreglo)
{
	int j;
	for(j=0; j<tamanio; j++)
	{	
		printf("Ingresa el numero %d: ", j+1);
		scanf("%d", arreglo+j);
	}
}

void ordenar(int ordenar, int *ascendente)
	{
		int j, x, a;

		for ( j = 0; j<ordenar; j++)
		{
		for(x=0, a=1; a<ordenar; x++, a++)
			{
				if(*(ascendente+x)>*(ascendente+a))
					{
						int temp=*(ascendente+a);
						*(ascendente+a)=*(ascendente+x);
						*(ascendente+x)=temp;
					}
			}
		}
	}

