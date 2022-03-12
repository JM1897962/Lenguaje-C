#include <stdio.h>
int main()
//   Universidad Autonoma de Nuevo Leon //
// Facultad de Ciencias Fisico-Matematico //
// 			Practica No.3				//
//	Alumno: Juan Manuel Martínez Ramírez //
{
	int x=4;
	puts("Inicio");
	if(x<=3)
	if(x!=0)
	puts ("Hola desde el segundo if");
	else
	puts ("Hola desde el primer else");	
	if(x>3)
	if(x!=0)
	puts ("Hola desde el cuarto if");
	else
	puts ("Hola desde el segundo else");	
	else
	puts("Fin");
	
	printf("\n\nSolo imprimiria lo siguiente : Inicio y Hola desde el cuarto if");
	printf("\nSolo se tendria que cambiar el numero int por uno menor a 3.");
	
	
	return 0;
}
