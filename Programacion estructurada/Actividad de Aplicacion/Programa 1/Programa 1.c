#include <stdio.h>
int main()
{
    printf("\t\tUniversidad Autonoma de Nuevo Leon.\n");
    printf("%55s", "Facultad de Ciencias Fisico-Matematico.\n\n");
    
    printf("%s%32s\n\n", "Programacion Estructurada.", "Feb-Jun 2021");
    
    printf("%s%8s%38s%10s\n", "No", "Nombre", "Matricula", "Carrera");
    printf("%d%30s%15d%10s\n" ,1,"Ana Lizbeth Dominguez Garza",1842829,"LM");
	printf("%d%23s%22d%10s\n" ,2,"Angel Ledezma Zavala",1941436,"LCC");
	printf("%d%31s%14d%10s\n" ,3,"Juan Manuel Martinez Ramirez",1897962,"LCC");
	printf("%d%33s%12d%10s\n" ,4,"Luis Armando Villanueva Garcia",1907995,"LCC");

    return 0;
}
