#include <stdio.h>
#include <math.h>

int suma(int z, int e);
int resta(int x, int y);
int multiplicacion(int j, int k);
int division(int t, int a);
int potencia(int d, int p);

int main()
{
	int des, num1, num2;
	
	do
	{
		
		printf("Ingresa el numero uno: ");
		scanf("%d", &num1);
		
		printf("Ingresa el numero dos: ");
		scanf("%d", &num2);
		
		
		printf("\n\nIngresa que deseas hacer.\n1)Suma.\n2)Resta.\n3)Multiplicacion.\n4)Division.\n5)Potencia.\n6)Salir.");
		scanf("%d", &des);
		
		
		switch(des)
		
			{
				case 1:
					
					printf("\nTu suma es: %d\n\n", suma(num1,num2));
					fflush(stdin);
					getchar();
					
				break;
				
				case 2:
					
					printf("\nTu resta es: %d\n\n", resta(num1,num2));
					fflush(stdin);
					getchar();
					
				break;
				
				case 3:
					
					printf("\nTu multiplicacion es: %d\n\n", multiplicacion(num1,num2));
					fflush(stdin);
					getchar();
					
				break;
				
				case 4:
					
					printf("\nTu division es: %d\n\n", division(num1,num2));
					fflush(stdin);
					getchar();
					
				break;
				
				case 5:
					
					printf("\nTu potencia es: %d\n\n", potencia(num1,num2));
					fflush(stdin);
					getchar();
					
				break;
				
				default:
					
				break;
				
			}	
		
	}while(des!=6);
	
	return 0;
	
}

int suma(int z, int e)
{
	return (z+e);
}

int resta(int x, int y)
{
	return (x-y);
}

int multiplicacion(int j, int k)
{
	return (j*k);
}

int division(int t, int a)
{
	return (t/a);
}

int potencia(int d, int p)
{
	return (pow(d,p));
}
