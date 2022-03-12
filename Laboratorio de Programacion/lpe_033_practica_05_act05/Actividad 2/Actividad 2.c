#include <stdio.h>
#include <locale.h>
//   Universidad Autonoma de Nuevo Leon //
// Facultad de Ciencias Fisico-Matematico //
// 			Practica No.2				//
//	Alumno: Juan Manuel Martínez Ramírez //
int main()
{
    setlocale(LC_ALL,"spanish");
    int num,i,rest,k=0,l=1,sum=0;
    
    printf("Indique el limitante de la Serie Fibonacci: ");
    scanf("%d",&num);
    
    printf("0\n1\n");
    if(num>2 && num<100)
	{
    rest=num-2;
        for(i=1; i<=rest; i++)
		{
            sum=k+l;
            printf("%d\n",sum);
            k=l;
            l=sum;
        }
    }
    
    else
	{
        printf("\nEl numero no es correcto");
    }  
	  
    return 0;
}
