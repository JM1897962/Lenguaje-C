#include <stdio.h> 
#include <string.h>

struct nuevo
	{
		char artista[40], titulo[30];
		int  dia, mes, anio, canciones, total;
		float precio;
	}nuevo[1000];
	
struct can
	{
		char nom[30];
		float dur;
		
	}can[1000];
	
int main()
	{
		int id=0, i, des, aumento=0, des2;
		char cancion[30], cantante[30];
		
		do
		{
			printf("Que deseas hacer en esta actividad.\n1)Alta.\n2)Consulta.\n3)Salir.\nIngresalo: ");
			scanf("%d", &des);
			
				switch(des)
					{
						case 1:
							system("cls");
							for(id=aumento; id<=aumento; id++)
								{
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									printf("\t\t\t\t\t\t\t\tNuevo Agregada.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
									printf("Su ID es: %d\n", id);
									
									printf("Escribe el titulo: ");
									fflush(stdin);
									gets(nuevo[id].titulo);
									
									printf("Escribe el nombre del artista: ");
									fflush(stdin);
									gets(nuevo[id].artista);
									
									printf("Escribe su precio: ");
									fflush(stdin);
									scanf("%f", &nuevo[id].precio);
									
									printf("Escribe su a%co de salida: ", 164);
									fflush(stdin);
									scanf("%d", &nuevo[id].anio);
									
									while(nuevo[id].anio>2021)
										{
											system("cls");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\t\t\tNuevo Agregada.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
											printf("Su ID es: %d\n", id);
											printf("Escribe el titulo: %s\n", nuevo[id].titulo);
											printf("Escribe el nombre del artista: %s\n", nuevo[id].artista);
											printf("Escribe su precio: %1.2f\n", nuevo[id].precio);
											printf("Escribe su a%co de salida: ", 164);
											fflush(stdin);
											scanf("%d", &nuevo[id].anio);
										}
										
									printf("Escribe su mes de salida: ");
									fflush(stdin);
									scanf("%d", &nuevo[id].mes);
									
									while(nuevo[id].mes>12 || nuevo[id].mes<1)
										{
											system("cls");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\t\t\tNuevo Agregada.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
											printf("Su ID es: %d\n", id);
											printf("Escribe el titulo: %s\n", nuevo[id].titulo);
											printf("Escribe el nombre del artista: %s\n", nuevo[id].artista);
											printf("Escribe su precio: %1.2f\n", nuevo[id].precio);
											printf("Escribe su a%co de salida: %d\n", 164, nuevo[id].anio);
											printf("Escribe su mes de salida: ");
											fflush(stdin);
											scanf("%d", &nuevo[id].mes);
										}
										
									if(nuevo[id].mes == 2)	
										{
											printf("Escribe su dia de salida: ");
											fflush(stdin);
											scanf("%d", &nuevo[id].dia);
											
											while(nuevo[id].dia>28 || nuevo[id].dia<1)
												{
													system("cls");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\t\t\tNuevo Agregada.\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
													printf("Su ID es: %d\n", id);
													printf("Escribe el titulo: %s\n", nuevo[id].titulo);
													printf("Escribe el nombre del artista: %s\n", nuevo[id].artista);
													printf("Escribe su precio: %1.2f\n", nuevo[id].precio);
													printf("Escribe su a%co de salida: %d\n", 164, nuevo[id].anio);
													printf("Escribe su mes de salida: %d\n", nuevo[id].mes);
													printf("Escribe su dia de salida: ");
													fflush(stdin);
													scanf("%d", &nuevo[id].dia);
												}
										}
										
									else if(nuevo[id].mes == 1 || nuevo[id].mes == 3 || nuevo[id].mes == 5 || nuevo[id].mes == 7 || nuevo[id].mes == 8 || nuevo[id].mes == 10 || nuevo[id].mes == 12)	
										{
											printf("Escribe su dia de salida: ");
											fflush(stdin);
											scanf("%d", &nuevo[id].dia);
											
											while(nuevo[id].dia>31 || nuevo[id].dia<1)
												{
													system("cls");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\t\t\tNuevo Agregada.\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
													printf("Su ID es: %d\n", id);
													printf("Escribe el titulo: %s\n", nuevo[id].titulo);
													printf("Escribe el nombre del artista: %s\n", nuevo[id].artista);
													printf("Escribe su precio: %1.2f", nuevo[id].precio);
													printf("Escribe su a%co de salida: %d\n", 164, nuevo[id].anio);
													printf("Escribe su mes de salida: %d\n", nuevo[id].mes);
													printf("Escribe su dia de salida: ");
													fflush(stdin);
													scanf("%d", &nuevo[id].dia);
												}
										}
									
										else if(nuevo[id].mes == 4 || nuevo[id].mes == 6 || nuevo[id].mes == 9 || nuevo[id].mes == 11)	
										{
											printf("Escribe su dia de salida: ");
											fflush(stdin);
											scanf("%d", &nuevo[id].dia);
											
											while(nuevo[id].dia>30 || nuevo[id].dia<1)
												{
													system("cls");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\t\t\tNuevo Agregada.\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
													printf("Su ID es: %d\n", id);
													printf("Escribe el titulo: %s\n", nuevo[id].titulo);
													printf("Escribe el nombre del artista: %s\n", nuevo[id].artista);
													printf("Escribe su precio: %1.2f\n", nuevo[id].precio);
													printf("Escribe su a%co de salida: %d\n", 164, nuevo[id].anio);
													printf("Escribe su mes de salida: %d\n", nuevo[id].mes);
													printf("Escribe su dia de salida: ");
													fflush(stdin);
													scanf("%d", &nuevo[id].dia);
												}
										}
									
									printf("Escribe cuantas canciones quieres, deben ser mayor a 0 y menor a 7: ");
									fflush(stdin);
									scanf("%d", &nuevo[id].canciones);
									
									while(nuevo[id].canciones>6 || nuevo[id].canciones<1)
										{
											system("cls");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\t\t\tNuevo Agregada.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
											printf("Su ID es: %d\n", id);
											printf("Escribe el titulo: %s\n", nuevo[id].titulo);
											printf("Escribe el nombre del artista: %s\n", nuevo[id].artista);
											printf("Escribe su precio: %1.2f\n", nuevo[id].precio);
											printf("Escribe su a%co de salida: %d\n", 164, nuevo[id].anio);
											printf("Escribe su mes de salida: %d\n", nuevo[id].mes);
											printf("Escribe su dia de salida: %d\n", nuevo[id].dia);
											printf("Escribe cuantas canciones quieres, deben ser mayor a 0 y menor a 7: ");
											fflush(stdin);
											scanf("%d", &nuevo[id].canciones);
										}	
										
									
										
									for(i=nuevo[id].total; i<nuevo[id].canciones+nuevo[id].total; i++)
										{
											printf("Escribe el nombre de la cancion: ");
											fflush(stdin);
											gets(can[i].nom);
											printf("Escribe su duracion: ");
											fflush(stdin);
											scanf("%f", &can[i].dur);
										}
										
									nuevo[id+1].total = nuevo[id].total + nuevo[id].canciones;		
								}
								
							aumento = aumento +1;
							
							system("cls");
							printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
							printf("\t\t\t\t\t\t\t\tColeccion.\n\n");
							printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
							for(id=0; id<aumento; id++)
								{
									printf("Id: %d, Titulo: %s, Artista: %s, Precio: %1.2f, Fecha de Salida: %d/%d/%d, Canciones: %d\n\n", id, nuevo[id].titulo, nuevo[id].artista,nuevo[id].precio ,nuevo[id].dia,nuevo[id].mes,  nuevo[id].anio, nuevo[id].canciones);
									
									for(i=nuevo[id].total; i<nuevo[id].canciones+nuevo[id].total; i++)
										{
											printf("\nNombre de la cancion: %s\n", can[i].nom); 
											printf("Duracion: %1.2f\n" , can[i].dur);
										}
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
									nuevo[id+1].total = nuevo[id].total + nuevo[id].canciones;
								}
							
							printf("\nAGREGADO CON EXITO\nPresiona enter para continuar.");
							fflush(stdin);
							getchar();
							
							system("cls");
							
						break;
						
						case 2:
							
						system("cls");
						
						printf("Como deseas consultar a los cantantes.\n1)Por Titulo.\n2)Artista.\n3)Salir.\nIngresalo: ");
						scanf("%d", &des2);
						system("cls");
						
							switch(des2)
							{
								case 1:
									
									printf("Ingresa el titulo del disco del artista: ");
									fflush(stdin);
									gets(cancion);
									system("cls");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									printf("\t\t\t\t\t\t\t\tPor Titulo.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									for(id=0; id<aumento; id++)
										{
											if(strcmp(cancion,nuevo[id].titulo)==0)
												{
												
													printf("Id: %d, Titulo: %s, Artista: %s, Precio: %1.2f, Fecha de Salida: %d/%d/%d, Canciones: %d\n\n", id, nuevo[id].titulo, nuevo[id].artista,nuevo[id].precio ,nuevo[id].dia,nuevo[id].mes,  nuevo[id].anio, nuevo[id].canciones);
													
													for(i=nuevo[id].total; i<nuevo[id].canciones+nuevo[id].total; i++)
														{
															printf("\nNombre de la cancion: %s\n", can[i].nom); 
															printf("Duracion: %1.2f\n" , can[i].dur);
														}
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
													nuevo[id+1].total = nuevo[id].total + nuevo[id].canciones;
												}
										}
										
									printf("\nCONSULTA EXITOSA\nPresiona enter para continuar.");
									fflush(stdin);
									getchar();
									system("cls");
									
								break;
								
								case 2:
									
									printf("Ingresa el artista: ");
									fflush(stdin);
									gets(cantante);
									system("cls");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									printf("\t\t\t\t\t\t\t\tPor Titulo.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									for(id=0; id<aumento; id++)
										{
											if(strcmp(cantante,nuevo[id].artista)==0)
												{
												
													printf("Id: %d, Titulo: %s, Artista: %s, Precio: %1.2f, Fecha de Salida: %d/%d/%d, Canciones: %d\n\n", id, nuevo[id].titulo, nuevo[id].artista,nuevo[id].precio ,nuevo[id].dia,nuevo[id].mes,  nuevo[id].anio, nuevo[id].canciones);
													
													for(i=nuevo[id].total; i<nuevo[id].canciones+nuevo[id].total; i++)
														{
															printf("\nNombre de la cancion: %s\n", can[i].nom); 
															printf("Duracion: %1.2f\n" , can[i].dur);
														}
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
													nuevo[id+1].total = nuevo[id].total + nuevo[id].canciones;
												}
										}
										
									printf("\nCONSULTA EXITOSA\nPresiona enter para continuar.");
									fflush(stdin);
									getchar();
									system("cls");
									
								break;
								
								default:
									
								break;
								
							}
						
						break;
						
						default: 
						
						break;
					}
			
		}while(des!=3);
		
		return 0;
	}
