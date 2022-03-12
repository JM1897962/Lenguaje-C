#include<stdio.h>
int main()
{
	int num, i , j;
	
	printf("Escribe de cuanto por cuanto quieres tu matriz: ");
	scanf("%d", &num);
	i=num;
	j=num;
	int mat[i][j];
	
	printf("\n\n");
	for(i=0; i<num; i++)
		{
			for(j=0; j<num; j++)
				{
					if(i==j)
					{
						printf("1 ");
					}
					
					else
					{
						printf("0 ");
					}
					
				}
			printf("\n");	
		}
		
	return 0;
}
