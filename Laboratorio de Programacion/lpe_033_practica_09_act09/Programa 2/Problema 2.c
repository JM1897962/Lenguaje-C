#include <stdio.h>
#include <string.h>
int main()
{
	char frases[10][10], alfabeto[10];
	int i, may = 0;
	
	for (i=0; i<10; i++)
		{
			printf("Ingresa la frase No. %d: ", i+1);
			gets(frases[i]);		
		}
	
	printf("\n\n");
	
	for (i=0; i<10; i++)
		{
			if(i==0)
				{
					may = 0;
				}
			
			printf("Frase %d: %s\n", i+1, frases[i]);
			
			if(strcmp(frases[i],frases[may])==-1)
				{
					may = i;
				}
		}
		
	printf("\n\n");	
	
	printf ("La primera frase es %s", frases[may]);
	
	return 0;
}
