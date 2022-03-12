#include <stdio.h>

int main()
{
    int prim=0, segu=0, des, des2, i=0,j=0, lug1[5]={0} ,lug2[5]={0}, inc;
    do
    {
        system("cls");
		printf("Primera Fila.\n");
		
        for(inc=0; inc<5; inc++)
        	{
        		printf("%d\t", lug1[inc]);
			}
		
		printf("\n\n");
			
		printf("Segunda Fila.\n");
        for(inc=0; inc<5;inc++)
        	{
        		printf("%d\t", lug2[inc]);
			}
		
		printf("\n\nIngresa en que seleccion quieres estar.\n1)Primera clase.\n2)Segunda clase.\nPor favor, ingresalo, si deseas salir, presiona 3: ");
        scanf("%d", &des);
		
        switch(des)
        {
            case 1:
            
            if(prim<5)
	            {
	                system("cls");
					prim=prim+1;
	                printf("Usted esta en el vuelo de primera clase, le toca el boleto %d\n\n", prim);
	                printf("\nPresiona enter para continuar.");
					fflush(stdin);
					getchar();
					lug1[i]=1;
	                i=i+1;
	            }
            
            else
            {
                system("cls");
				printf("Ingresa que deseas hacer.\n1)Estar en segunda clase.\n2)Esperar.\nIngresa que deseas hacer: ");
                scanf("%d", &des2);
                
                switch(des2)
                	{
                		
	                case 1:
	                    
		                if(segu<5)
		            		{
		            			system("cls");
			                	segu=segu+1;
			               		printf("Usted esta en el vuelo de segunda clase, le toca el boleto %d\n\n", segu+5);
			               		lug2[j]=1;
	                			j=j+1;
	                			printf("\nPresiona enter para continuar.");
								fflush(stdin);
								getchar();
		            		}
		            
		            	else
		           			{
		           				system("cls");
		               			printf("El vuelo sale en 3 horas.\n\n");
		               			printf("\nPresiona enter para continuar.");
								fflush(stdin);
								getchar();
		            		}
               		break; 
               		
               		}
        	}
            break;
            
            
            
           case 2:
            
            if(segu<5)
            	{
                	system("cls");
					segu=segu+1;
                	printf("Usted esta en el vuelo de segunda clase, le toca el boleto %d\n\n", segu+5);
                	lug2[j]=1;
	                j=j+1;
	                printf("\nPresiona enter para continuar.");
					fflush(stdin);
					getchar();
           		}
            
            else
	            {
	                system("cls");
					printf("Ingresa que deseas hacer.\n1)Estar en primera clase.\n2)Esperar.\nIngresa que deseas hacer: ");
	                scanf("%d", &des2);
                
                	switch(des2)
                		{
			                case 1:    
			                	if(prim<5)
						            {
						                system("cls");
										prim=prim+1;
						                printf("Usted esta en el vuelo de primera clase, le toca el boleto %d\n\n", prim);
						                lug1[i]=1;
	               						i=i+1;
	               						printf("\nPresiona enter para continuar.");
										fflush(stdin);
										getchar();
						            }
			            
					            else
					            {
					            	system("cls");
					                printf("El vuelo sale en 3 horas.\n\n");
					                printf("\nPresiona enter para continuar.");
									fflush(stdin);
									getchar();
					            }
					            
                			break; 
                		}
            	}
            
            break;             
            
     	}
     	
        
    }while(des!=3);
    
     system("cls");
	printf("Primera Fila.\n");
		
    for(inc=0; inc<5; inc++)
        {
        	printf("%d\t", lug1[inc]);
		}
		
	printf("\n\n");
			
	printf("Segunda Fila.\n");
	for(inc=0; inc<5;inc++)
        {
        	printf("%d\t", lug2[inc]);
		}
    
    return 0;
}
