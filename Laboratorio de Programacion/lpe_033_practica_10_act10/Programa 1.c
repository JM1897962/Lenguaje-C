#include <stdio.h>
#include <string.h>

struct alumno
{
	char nombre[20], appat[10], apmat[10], tel[10], correo[30];
	int edad, sem, mat;
	float prom; 
}alumno[30];

int main()
{
	int id=0, des, lim=0;
	
	do
	{
		system("cls");
		printf("Escribe que deseas hacer.\n1)Nuevo Alumno.\n2)Ver Alumnos.\n3)Salir.\nPor favor, ingresa un numero: ");
		scanf("%d", &des);
		
		switch(des)
			{
				case 1:
					system("cls");
					printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("\t\t\t\t\t\t\t\t\tNuevo Alumno.\n\n");
					printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("Escribe su nombre: ");
					fflush(stdin);
					gets(alumno[id].nombre);
					printf("Escribe su apellido paterno: ");
					fflush(stdin);
					gets(alumno[id].appat);
					printf("Escribe su apellido materno: ");
					fflush(stdin);
					gets(alumno[id].apmat);
					printf("Escribe su edad: ");
					fflush(stdin);
					scanf("%d", &alumno[id].edad);
					printf("Escribe su matricula: ");
					fflush(stdin);
					scanf("%d", &alumno[id].mat);
					printf("Escribe su semestre, del 1 al 9: ");
					scanf("%d",&alumno[id].sem);	
					printf("Escribe su promedio: ");
					scanf("%f",&alumno[id].prom);
					printf("Escribe su numero de telefono: ");
					fflush(stdin);
					gets(alumno[id].tel);
					printf("Escribe su correo electronico: ");
					fflush(stdin);
					gets(alumno[id].correo);
					
					id = id+1;
					lim = id;
					
					system("cls");
					printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("\t\t\t\t\t\t\t\t\tAlumnos.\n\n");
					printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					for(id=0; id<lim; id++)
						{
							printf("Alumno No. %d\nNombre: %s\nAp. Pat: %s\nAp. Mat: %s\nEdad: %d\nMatricula: %d\nSemestre: %d\nPromedio: %1.2f\nTelefono: %s\nCorreo: %s\n\n",id+1, alumno[id].nombre, alumno[id].appat, alumno[id].apmat, alumno[id].edad, alumno[id].mat, alumno[id].sem, alumno[id].prom, alumno[id].tel, alumno[id].correo);
						}
					
					printf("AGREGADO CON EXITO\nPresiona enter para continuar: ");
					fflush(stdin);
					getchar();
					
				
				break;
				
				case 2: 
				system("cls");
				printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("\t\t\t\t\t\t\t\t\tAlumnos.\n\n");
				printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				for(id=0; id<lim; id++)
						{
							printf("Alumno No. %d\nNombre: %s\nAp. Pat: %s\nAp. Mat: %s\nEdad: %d\nMatricula: %d\nSemestre: %d\nPromedio: %1.2f\nTelefono: %s\nCorreo: %s\n\n",id+1, alumno[id].nombre, alumno[id].appat, alumno[id].apmat, alumno[id].edad, alumno[id].mat, alumno[id].sem, alumno[id].prom, alumno[id].tel, alumno[id].correo);
						}
					
				printf("Presiona enter para continuar: ");
				fflush(stdin);
				getchar();
				break;
				
				default:
				break;
			}
		
	}while(des!=3);
	
	return 0;
	
}
