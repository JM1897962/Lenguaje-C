#include <stdio.h>
int main()
{
	int num, d1,d2,d3,d4,d5,d6;
	printf("Introduce un numero de seis digitos: ");
	scanf("%d", &num);
	d1 = num / 100000;
	d2 = (num-(d1*100000)) / 10000;
	d3 = (num-(d1*100000)-(d2*10000)) / 1000;
	d4 = (num-(d1*100000)-(d2*10000)-(d3*1000))/100;
	d5 = (num-(d1*100000)-(d2*10000)-(d3*1000)-(d4*100))/10;
	d6 = (num-(d1*100000)-(d2*10000)-(d3*1000)-(d4*100)-(d5*10))/1;
	
	printf ("\nSus numeros individuales son: ");
	printf("\n%d", d1);
	printf("\n%d", d2);
	printf("\n%d", d3);
	printf("\n%d", d4);
	printf("\n%d", d5);
	printf("\n%d", d6);
	
	printf("\n");
	
	return 0;
}
