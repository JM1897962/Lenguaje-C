#include <stdio.h>
#include <ctype.h>
#include <conio.h>
//   Universidad Autonoma de Nuevo Leon //
// Facultad de Ciencias Fisico-Matematico //
// 			Practica No.4				//
//	Alumno: Juan Manuel Martínez Ramírez //
int main ()
{
	char UNO, DOS, PAL [20];
	int i ;
	
	printf("Escribe dos letras : ");
	scanf("%c %c", &UNO, &DOS);		
	printf("Escribe una palabra: ");
	scanf("%s",PAL);	
	for (i=0; PAL[i]; i++)
	{
		PAL[i] = toupper(PAL[i]);
	}
	printf("\nLos datos en mayusculas son %c , %c y %s",toupper(UNO), toupper(DOS), PAL);
	for (i=0; PAL[i]; i++)
	{
		PAL[i] = tolower(PAL[i]);
	}
	printf("\nLos datos en minusculas son %c , %c y %s",tolower(UNO), tolower(DOS), PAL);
	getch();
	return 0;
}
