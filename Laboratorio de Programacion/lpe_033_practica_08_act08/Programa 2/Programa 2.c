#include<stdio.h>
int main()
{
	int alum, mate, i , j, sumatot=0, sumaalum=0;
	
	printf("Escribe cuantas materias quieres: ");
	scanf("%d", &mate);
	printf("Escribe cuantos alumnos quieres saber su calificacion: ");
	scanf("%d", &alum);
	
	i=alum;
	j=mate;
	int mat[i][j];
	
	printf("\n\n");
	for(i=0; i<alum; i++)
		{
			for(j=0; j<mate; j++)
				{
					printf("La calificacion del alumno %d de la materia %d es: ", i+1, j+1);
					scanf("%d", &mat[i][j]);
					
					if(mat[i][j]>10 || mat[i][j]<0)
						{
							printf("Vuelve a escribir la calificacion del alumno %d de la materia %d es: ", i+1, j+1);
							scanf("%d", &mat[i][j]);
						}
					
				}
			printf("\n");	
		}
		
	printf("\n\nCalificaciones y promedios.\n\n");
	for(i=0; i<alum; i++)
		{
			for(j=0; j<mate; j++)
				{
					printf("La calificacion del alumno %d de la materia %d es: %d\n", i+1, j+1, mat[i][j]);
					sumatot=sumatot+mat[i][j];
					sumaalum=sumaalum+mat[i][j];
				}
				
			printf("El alumno con la matricula %d tiene %d de promedio.\n", i+1, sumaalum/mate);
			sumaalum=0;	
			printf("\n");	
		}
	
	
	printf("El promedio total es: %d", sumatot/(alum*mate));	
		
	return 0;
}
