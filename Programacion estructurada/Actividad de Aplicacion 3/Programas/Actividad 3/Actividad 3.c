#include <stdio.h>
#include <stdlib.h>
int main()
{
	char pal[50];
	int i, t;
	
	printf("Ingresa una combinacion de palabras y numeros: ");
	gets(pal);
	
	printf("\n\n");
	
	for(i=0; i<50; i++)
		{
			if(pal[i]>='a' && pal[i]<='z')
				{
					for(t=0; t<pal[i-1]-'0'; t++)
						{
							printf("%c", pal[i]);
						}
				}
		}
	
	printf("\n");
	return 0;
}
