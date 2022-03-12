#include <stdio.h>
#include <string.h>
int main()
{
	char nom[10][10], apel[10][10];
	int i;
	
	for (i=0; i<10; i++)
		{
			printf("Ingresa tu nombre (Alumno %d): ", i+1);
			gets(nom[i]);		
		}
	
	printf ("\n\n");
	
	for (i=0; i<10; i++)
		{
			printf("Ingresa tu apellido (Alumno %d): ", i+1);
			gets(apel[i]);		
		}
		
	printf ("\n\n");
	
	for (i=0; i<10; i++)
		{
			printf("El nombre completo del alumno %d es: %s %s\n", i+1, nom[i], apel[i]);
		}
	
	
	return 0;
}
