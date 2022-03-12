#include <stdio.h>
int main()
{
	int i=0, opcion, num[11]={0};
	
	for(i=1; i<11;i++)
	{
		printf("Escribe el numero %d: ", i);
		scanf("%d", &num[i]);
	}
	
	
	do
	{
		printf("\n\n");
		for(i=1; i<11;i++)
			{
				printf("%d ", num[i]);
			}
		
		printf("\n\nSelecciona la opcion que quieras hacer, si gustas salir, presiona un numero diferente a los presentes.\n1)Modificar un valor.\n2)Buscar un valor.\nSeleccionalo: ");
		scanf("%d", &opcion);
		
		switch(opcion)
			{
				case 1: 
				printf("\n\n");
				for(i=1; i<11;i++)
					{
						printf("%d ", num[i]); 
					}
				printf("\nEscribe el lugar del numero que te gustaria modificar del 1 al 10: ");
				scanf("%d", &i);
				if (i<11 && i>0)
					{
						printf("Escribe su modificacion: ");
						scanf("%d", &num[i]);
					}
				
				else
					{
						printf("Numero incorrecto, presiona enter para continuar.");
						fflush(stdin);
						getchar();	
					}
				break;
				
				case 2:
				printf("\nEscribe el lugar del numero que te gustaria observar del 1 al 10: ");
				scanf("%d", &i);
				if (i<11 && i>0)
					{
						printf("Aqui esta el numero %d que se encuentra en la posicion %d, presiona enter para continuar.", num[i], i);
						fflush(stdin);
						getchar();
					}
				
				else
					{
						printf("Numero incorrecto, presiona enter para continuar.");
						fflush(stdin);
						getchar();	
					}
				break;
			}
		
	}while(opcion > 0 && opcion < 3);
	
	printf("Aqui estan los numeros.\n");
	for(i=1; i<11;i++)
		{
			printf("%d ", num[i]); 
		}
	
	return 0;
}
