#include <stdio.h>

int main()
{
	int mat, alum, i, j, alto = 0, bajo = 0;
	float cal, suma=0, alta = suma, baja = suma;
	
	printf ("Escribe la cantidad de alumnos que tienes: ");
	scanf("%d", &alum);
	printf("\n\n");
	
	for(i=1; i<=alum; i++)
	{
		printf("Escribe la matricula del alumno: ");
		scanf("%d", &mat);
	
		for(j=1; j<=5; j++)
		{
			printf("La calificacion %d del alumno con matricula %d, es: ", j, mat);
			scanf("%f", &cal);
			
			if (cal!=0)
			{
				suma = suma + cal;
			}
			else
			{
				printf("\nEscribiste un 0.");
				return 0;
			}
		}
		printf("El promedio del alumno con la matricula %d es %1.2f.", mat, suma/5);
		
		if(i==1)
		{
			alta=suma;
			alto=mat;
			baja=suma;
			bajo=mat;
		}
		
		if(alta < suma)
		{
			alta = suma;
			alto = mat;
		}
		
		if(baja > suma)
		{
			baja = suma;
			bajo = mat;
		}
		printf("\n\n");
		suma = 0;
	}
	
	printf("La calificacion mas alta es del alumno con la matricula %d y su calificacion es %1.2f.", alto, alta/5);
	printf("\nLa calificacion mas baja es del alumno con la matricula %d y su calificacion es %1.2f.", bajo, baja/5);

	return 0;
}
