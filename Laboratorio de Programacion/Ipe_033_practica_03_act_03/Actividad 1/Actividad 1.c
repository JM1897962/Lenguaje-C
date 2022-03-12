#include <stdio.h>
int main()
//   Universidad Autonoma de Nuevo Leon //
// Facultad de Ciencias Fisico-Matematico //
// 			Practica No.1				//
//	Alumno: Juan Manuel Martínez Ramírez //
{
	int num;
	char let;
	
	printf("Introduce un numero: ");
	scanf("%d", &num);
	printf("Introduce una letra: ");
	scanf("%s", &let);
	

	if (num % 2 == 0)
	{
		printf("\nEl numero es par.");
	}
	else 
	{
		printf("\nEl numero es impar.");
	}
		
    if(let >= 'a' && let <= 'z')
    {
    	printf("\nLa letra es minuscula.");
	}
    else 
    {
    	printf("\nLa letra es mayuscula.");
	}
        
	getch();
	return 0;
}
