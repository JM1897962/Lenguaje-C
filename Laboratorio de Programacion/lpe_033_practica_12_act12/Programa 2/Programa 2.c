#include <stdio.h> 
#include <time.h> 
#include <windows.h>
#include <string.h>

int mult1(int y);
int mult2(int x);
int mult3(int j);
int mult4(int z, int e);

struct nuevo
	{
		char  nom[40], correo[30], dir[40], tel[12];
		int  activado;
		
	}nuevo[1000];
	
struct autonuevo
	{
		char titulo[30], autor[40], tipo[1];
		int  anio, cantidad, activado2;
		float precio;
		
	}autonuevo[1000];
	
struct rentaprestar
	{
		int us, car, cant, estatus, dias;
		char tiporl[1];
	}rentaprestar[1000];
		
struct venta
	{
		int cantauto, auto2;
		float precauto, ivaauto, totalauto;
		
	}venta[1000];	
		
int main()
{
	int usuario, contra, intentos=0, opcion, clientes, autos ,biblioteca, aumento=0, aumento2 = 0, id=0, id2=0, lugar, lugar2, num, des=1, des2=1, conf = 0, conf2 = 0, cantidad=0, id3=0, lugar3, aumento3 = 0, id4=0 , aumento4=0, id5=0, aumento5=0, consulta, dev;

	time_t tiempo;
	time(&tiempo);
	
	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("\t\t\t\t\t\t\t\t\tAgencia FCFM.\n\n");
	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");	
	printf("Usuario: ");
	scanf("%d", &usuario);
	
	while(usuario != 1897962)
	{
		system("cls");
		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("\t\t\t\t\t\t\t\t\tAgencia FCFM.\n\n");
		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
		printf("\aUsuario: ");
		scanf("%d", &usuario);
		intentos = intentos+1;
		if(intentos==2)
		{
			system("cls");
			printf("\t\t\t\t\t\t\aSE CIERRA SESION.");
			return 0;
		}
	}
	
	system("cls");
	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
	printf("\t\t\t\t\t\t\t\t\tAgencia FCFM.\n\n");
	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
	printf("Usuario: %d", usuario);
	printf("\nContrase%ca: ", 164);
	scanf("%d", &contra);
	intentos=0;
	
	while(contra != 1897962)
	{
		system("cls");
		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("\t\t\t\t\t\t\t\t\tAgencia FCFM.\n\n");
		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
		printf("Usuario: %d", usuario);
		printf("\n\aContrase%ca: ",164);
		scanf("%d", &contra);
		intentos = intentos+1;
		if(intentos==2)
		{
			system("cls");
			printf("\t\t\t\t\t\t\aSE CIERRA SESION.\n\n");
			return 0;
		}
	}
	
	intentos = 0; 
	
	do 
		{
	
			if(usuario==1897962)
				{
					system("cls");
					printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
					printf("Bienvenido Juan Manuel Martinez Ramirez.\t\t\t\t\t\t\t\t\t\t\t\t       %s", ctime(&tiempo));
					printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("\t\t\t\t\t\t\t\tVenta de Autos de FCFM.\n\n1)Clientes.\n2)Autos.\n3)Agencia.\n4)Salir.\n\nIngresa tu opcion: ");
					scanf("%d", &opcion);	
				}
							
			switch(opcion)
			{
				case 1: 
				
						system("cls");
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
						printf("\t\t\t\t\t\t\t\t\tClientes.\n\n");
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
						printf("1)Nuevo Cliente.\n2)Eliminar Cliente.\n3)Regresar al Menu Principal.\n\nIngresa tu opcion: ");
						scanf("%d", &clientes);
						
						switch(clientes)
						{
							case 1: 
									system("cls");
									
									id = lugar;
									for(id=aumento; id<=aumento; id++)
										{
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\t\t\tNuevo Cliente.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
											printf("Su ID es: %d\n", id);
											printf("Escribe su nombre completo: ");
											fflush(stdin);
											gets(nuevo[id].nom);
											printf("Escribe su correo electronico: ");
											fflush(stdin);
											gets(nuevo[id].correo);
											printf("Escribe su telefono: ");
											fflush(stdin);
											gets(nuevo[id].tel);
											printf("Escribe su direccion: ");
											fflush(stdin);
											gets(nuevo[id].dir);
											(nuevo[id].activado)=1;
										}
									
									system("cls");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									printf("\t\t\t\t\t\t\tClientes Registrados.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																		
									for(id=0; id<=aumento; id++)
										{
											if((nuevo[id].activado) == 1)
												{
													printf("ID: %d,NOMBRE: %s,CORREO: %s,TELEFONO: %s,DIRECCION: %s, ESTATUS: %d\n", id, nuevo[id].nom, nuevo[id].correo, nuevo[id].tel, nuevo[id].dir, nuevo[id].activado);
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												}
										}
									
									aumento = aumento+1;
									
									printf("\nAquel que tenga estatus igual a 1, esta activado, si tiene 0, es lo contrario.\nAGREGADO CON EXITO\nPresiona enter para continuar.");
									fflush(stdin);
									getchar();
							break;
							
							case 2: 
							
									system("cls");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									printf("\t\t\t\t\t\t\tEliminacion de Clientes.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									printf("\t\t\t\t\t\t\tClientes Registrados.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
									
									for(id=0; id<aumento; id++)
										{
											if((nuevo[id].activado) == 1 ||  (nuevo[id].activado) == 0) 
												{
													printf("ID: %d,NOMBRE: %s,CORREO: %s,TELEFONO: %s,DIRECCION: %s, ESTATUS: %d\n", id, nuevo[id].nom, nuevo[id].correo, nuevo[id].tel, nuevo[id].dir, nuevo[id].activado);
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												}
										}
							
									printf("\nIngresa el id que te gustaria borrar: "); 
									scanf("%d", &id);
									
									if ((nuevo[id].activado)==1)
										{
											printf("\a\n\nConfirmar si lo quieres dar de baja.\n");
											printf("1)Seguir con la eliminacion.\n2)Ir a un submenu.\nIntroduce tu seleccion: ");
											scanf("%d", &conf);			
										}
										
									else if ((nuevo[id].activado)==0)
										{
											conf = 2;
										}
									
									while(des == 1 && conf == 2) 
										{
											system("cls");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\t\tEliminacion de Clientes.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
										
											printf("\aElige otro cliente o ingresa lo que te gustaria hacer.\n");
											printf("1)Seguir eligiendo.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
											scanf("%d", &des);
											
											switch(des)
												{
													case 1:
														system("cls");
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
														printf("\t\t\t\t\t\t\tClientes Registrados.\n\n");
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														
														for(id=0; id<aumento; id++)
															{
																if((nuevo[id].activado) == 1) 
																	{
																		printf("ID: %d,NOMBRE: %s,CORREO: %s,TELEFONO: %s,DIRECCION: %s, ESTATUS: %d\n", id, nuevo[id].nom, nuevo[id].correo, nuevo[id].tel, nuevo[id].dir, nuevo[id].activado);
																		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																	}
															}
												
													printf("\nIngresa el id que te gustaria borrar: ");
													scanf("%d", &id);
													
													if ((nuevo[id].activado)==1)
														{
															printf("\a\n\nConfirmar si lo quieres dar de baja.\n");
															printf("1)Seguir.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
															scanf("%d", &conf);	
														}
	
													break;	
												}
											
										}
										
									if(des == 1 && conf == 1)
										{
											(nuevo[id].activado)=0;
											system("cls");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\t\tClientes Registrados.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
											for(id=0; id<aumento; id++)
												{
													if((nuevo[id].activado) == 1)
														{
															printf("ID: %d,NOMBRE: %s,CORREO: %s,TELEFONO: %s,DIRECCION: %s, ESTATUS: %d\n", id, nuevo[id].nom, nuevo[id].correo, nuevo[id].tel, nuevo[id].dir, nuevo[id].activado);
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														}
												}
											printf("\nBORRADO CON EXITO\nPresiona enter para continuar.");
											fflush(stdin);
											getchar();
											des = 1;
											conf = 0;
										}
									
									else if(des == 2 && conf == 2)
										{
											system("cls");
											conf = 0;
											des = 1;
										}		
							
							default :
							break;
							
						}
				break;
				
				case 2: 
						
						system("cls");
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
						printf("\t\t\t\t\t\t\t\tAutos.\n\n");
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
						printf("1)Nuevo Auto.\n2)Eliminar Auto.\n3)Regresar al Menu Principal.\n\nIngresa tu opcion: ");
						scanf("%d", &autos);
						
						switch(autos)
							{
								case 1: system("cls");
									
									id2 = lugar2;
									for(id2=aumento2; id2<=aumento2; id2++)
										{
												
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\t\t\t\tNuevo Libro.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");			
											printf("Su placa es: %d\n", id2);
											printf("Escribe el nombre del auto: ");
											fflush(stdin);
											gets(autonuevo[id2].titulo);
											printf("Escribe el nombre de la empresa creadora: ");
											fflush(stdin);
											gets(autonuevo[id2].autor);
											printf("Escribe el tipo de auto que es, si es R de Renta o V de Venta: ");
											fflush(stdin);
											gets(autonuevo[id2].tipo);
											
											if(autonuevo[id2].tipo[0] == 'v')
											{
												autonuevo[id2].tipo[0] = 'V';
											}
											
											else if(autonuevo[id2].tipo[0] == 'r')
											{
												autonuevo[id2].tipo[0] = 'R';
											}
											
											while(autonuevo[id2].tipo[0] !='V' && autonuevo[id2].tipo[0] !='R')
											{
												system("cls");
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
												printf("\t\t\t\t\t\t\t\t\t\tNuevo Libro.\n\n");
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");			
												printf("Su ISBN es: %d\n", id2);
												printf("Escribe el nombre del auto: %s\n", autonuevo[id2].titulo);
												printf("Escribe el nombre de la empresa creadora: %s\n", autonuevo[id2].autor);
												printf("Escribe el tipo de auto que es, si es R de Renta o V de Venta: \a");
												fflush(stdin);
												gets(autonuevo[id2].tipo);
											}
											
										if (autonuevo[id2].tipo[0] == 'V') 
											{
												printf("Escribe el precio: ");
												fflush(stdin);
												scanf("%f", &autonuevo[id2].precio);
											}
										
										else if (autonuevo[id2].tipo[0] == 'R')
											{
												printf("Su precio es de 0.\n");
												autonuevo[id2].precio = 0;
											}
										
											printf("Escribe el a%co de salida: ", 164);
											fflush(stdin);
											scanf("%d", &autonuevo[id2].anio);
											printf("Escribe la cantidad que hay en stock: ");
											fflush(stdin);
											scanf("%d", &autonuevo[id2].cantidad);
											(autonuevo[id2].activado2)=1;	
										}
									
									system("cls");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									printf("\t\t\t\t\t\t\tAutos Registrados.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
									for(id2=0; id2<=aumento2; id2++)
										{
											printf("PLACA: %d, TITULO: %s, AUTOR: %s, PRECIO: $%1.2f, F.P: %d, CANTIDAD: %d, ESTATUS: %d, TIPO: %c\n", id2, autonuevo[id2].titulo, autonuevo[id2].autor, autonuevo[id2].precio, autonuevo[id2].anio, autonuevo[id2].cantidad,  autonuevo[id2].activado2, autonuevo[id2].tipo[0]);
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												
										}
									
									aumento2 = aumento2+1;
									printf("\nAGREGADO CON EXITO\nPresiona enter para continuar.");
									fflush(stdin);
									getchar();
							break;
							
							case 2: 
								system("cls");	
								
								printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
								printf("\t\t\t\t\t\t\t\tEliminar Auto.\n\n");
								printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
								for(id2=0; id2<aumento2; id2++)
									{
										if((autonuevo[id2].activado2) == 1)
											{
												printf("PLACA: %d, TITULO: %s, AUTOR: %s, PRECIO: $%1.2f, F.P: %d, CANTIDAD: %d, ESTATUS: %d, TIPO: %c\n", id2, autonuevo[id2].titulo, autonuevo[id2].autor,autonuevo[id2].precio, autonuevo[id2].anio, autonuevo[id2].cantidad,  autonuevo[id2].activado2, autonuevo[id2].tipo[0]);
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
											}
									}
							
								printf("\nIngresa la placa que te gustaria borrar: "); 
								scanf("%d", &id2);
								
								if ((autonuevo[id2].activado2)==1)
										{
											printf("\a\n\nConfirmar si lo quieres dar de baja.\n");
											printf("1)Seguir con la eliminacion.\n2)Ir a un submenu.\nIntroduce tu seleccion: ");
											scanf("%d", &conf2);			
										}
										
								else if ((autonuevo[id2].activado2)==0)
									{
										conf2 = 2;
									}
							
								while(des2 == 1 && conf2 == 2)
									{
										system("cls");
										
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\t\t\tEliminacion de Autos.\n\n");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
										printf("\aEste auto ya no existe o aun no esta registrado, intentalo de nuevo.\n\n");
										printf("1)Seguir eligiendo.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
										scanf("%d", &des2);
										
									switch(des2)
										{
											case 1:	
												system("cls");	
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
												printf("\t\t\t\t\t\tAutos Registrados.\n\n");
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												for(id2=0; id2<aumento2; id2++)
													{
														if((autonuevo[id2].activado2) == 1)
															{
																printf("PLACA: %d, TITULO: %s, AUTOR: %s, PRECIO: $%1.2f, F.P: %d, CANTIDAD: %d, ESTATUS: %d, TIPO: %c\n", id2, autonuevo[id2].titulo, autonuevo[id2].autor,autonuevo[id2].precio, autonuevo[id2].anio, autonuevo[id2].cantidad, autonuevo[id2].activado2,autonuevo[id2].tipo[0]);
																printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
															}
													}
												printf("\nIngresa la placa que te gustaria borrar: ");
												scanf("%d", &id2);
												
												if ((autonuevo[id2].activado2)==1)
													{
														printf("\a\n\nConfirmar si lo quieres dar de baja.\n");
														printf("1)Seguir.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
														scanf("%d", &conf2);	
													}
													
											break;
										}
									}
									
								if(des2 == 1 && conf2 == 1)
									{
										(autonuevo[id2].activado2)=0;	
										system("cls");		
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\t\t\tAutos Registrados.\n\n");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");	
										for(id2=0; id2<aumento2; id2++)
											{
												if((autonuevo[id2].activado2) == 1)
													{
														printf("PLACA: %d, TITULO: %s, AUTOR: %s, PRECIO: $%1.2f, F.P: %d, CANTIDAD: %d, ESTATUS: %d, TIPO: %c\n", id2, autonuevo[id2].titulo, autonuevo[id2].autor,autonuevo[id2].precio, autonuevo[id2].anio, autonuevo[id2].cantidad,autonuevo[id2].activado2, autonuevo[id2].tipo[0]);
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													}
											}
										printf("\nBORRADO CON EXITO\nPresiona enter para continuar.");
										fflush(stdin);
										getchar();
									}
									
								else if(des2 == 2 && conf2 == 2)
									{
										system("cls");
										des2 = 1;
									}
											
							break;
								
							default :
							break;
						}
				break;
						
				case 3: 
						system("cls");
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
						printf("\t\t\t\t\t\t\t\tBiblioteca.\n\n");
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
						printf("1)Comprar Auto.\n2)Rentar Auto.\n3)Prestamo por Choque.\n4)Regresar Auto.\n5)Regresar al Menu Principal\n\nIngresa tu opcion: ");
						scanf("%d", &biblioteca);
						
						switch(biblioteca)
							{
								case 1:
								system("cls");	
								printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
								printf("\t\t\t\t\t\t\t\t\t\tCompra.\n\n");
								printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
								printf("\t\t\t\t\t\t\t\t\tAutos en Agencia.\n\n");
								printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
								for(id2=0; id2<aumento2; id2++)
									{
										if((autonuevo[id2].activado2) == 1 && autonuevo[id2].tipo[0] == 'V')
											{
												printf("PLACA: %d, TITULO: %s, AUTOR: %s, PRECIO: $%1.2f, F.P: %d, CANTIDAD: %d, ESTATUS: %d, TIPO: %c\n", id2, autonuevo[id2].titulo, autonuevo[id2].autor,autonuevo[id2].precio, autonuevo[id2].anio, autonuevo[id2].cantidad,  autonuevo[id2].activado2,autonuevo[id2].tipo[0]);
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
											}
									}
							
								printf("\nIngresa la placa que te gustaria comprar: "); 
								scanf("%d", &id2);
								
								if ((autonuevo[id2].activado2)==1 && autonuevo[id2].cantidad > 0 && autonuevo[id2].tipo[0] == 'V')
										{
											printf("Cuantos te gustaria comprar: ");
											scanf("%d", &cantidad);
											
											autonuevo[id2].cantidad = autonuevo[id2].cantidad - cantidad;
											
											if(autonuevo[id2].cantidad > 0 )
												{
													printf("\a\n\nConfirmar si lo quieres comprar.\n");
													printf("1)Seguir con la compra.\n2)Ir a un submenu.\nIntroduce tu seleccion: ");
													scanf("%d", &conf2);
												}		
										}
										
								if ((autonuevo[id2].activado2)==0 || autonuevo[id2].cantidad <= 0 || autonuevo[id2].tipo[0] == 'R')
									{
										conf2 = 2;
									}
							
								while(des2 == 1 && conf2 == 2)
									{
										autonuevo[id2].cantidad = autonuevo[id2].cantidad + cantidad;	
										system("cls");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\t\t\tCompra de Autos.\n\n");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
										printf("\aEste auto ya no existe, aun no esta registrado, solo esta para renta, o solo queda uno en stock, intentalo de nuevo.\n\n");
										printf("1)Seguir eligiendo.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
										scanf("%d", &des2);
									
									switch(des2)
										{
											case 1:	
												system("cls");	
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
												printf("\t\t\t\t\t\t\t\tAutos En La Biblioteca.\n\n");
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												for(id2=0; id2<aumento2; id2++)
													{
														if((autonuevo[id2].activado2) == 1 && autonuevo[id2].tipo[0] == 'V')
															{
																printf("PLACA: %d, TITULO: %s, AUTOR: %s, PRECIO: $%1.2f, F.P: %d, CANTIDAD: %d, ESTATUS: %d, TIPO: %c\n", id2, autonuevo[id2].titulo, autonuevo[id2].autor, autonuevo[id2].precio, autonuevo[id2].anio, autonuevo[id2].cantidad, autonuevo[id2].activado2,autonuevo[id2].tipo[0]);
																printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
															}
													}
												printf("\nIngresa la placa que te gustaria comprar: ");
												scanf("%d", &id2);
												
												if ((autonuevo[id2].activado2)==1 && autonuevo[id2].cantidad > 0 && autonuevo[id2].tipo[0] == 'V')
													{
														printf("Cuantos te gustaria comprar: ");
														scanf("%d", &cantidad);
														autonuevo[id2].cantidad = autonuevo[id2].cantidad - cantidad;
														
														if(autonuevo[id2].cantidad > 0 )
															{
																printf("\a\n\nConfirmar si lo quieres comprar.\n");
																printf("1)Seguir.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
																scanf("%d", &conf2);
															}
													}
											break;
										}
									}
								
								if(des2 == 1 && conf2 == 1)
									{
										system("cls");	
		
										venta[id4].auto2 = id2;
										venta[id4].cantauto = cantidad;
										venta[id4].precauto = cantidad*(autonuevo[id2].precio);
										venta[id4].ivaauto = cantidad*(((autonuevo[id2].precio)/100)*16);
										venta[id4].totalauto = cantidad*(autonuevo[id2].precio+(((autonuevo[id2].precio)/100)*16));
									
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\t\t\tVENTA/RENTA DE AUTOS BISONTE.\n\n");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\t\t\tCANTIDAD: %d\n", venta[id4].cantauto);
										printf("\t\t\t\t\t\t\t\tPRECIO %1.2f\n", venta[id4].precauto);
										printf("\t\t\t\t\t\t\t\tIVA %1.2f\n", venta[id4].ivaauto);
										printf("\t\t\t\t\t\t\t\tTOTAL: %1.2f\n\n", venta[id4].totalauto);
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\nVENTA CON EXITO\nPresiona enter para continuar.");
										fflush(stdin);
										getchar();
										cantidad = 0;
										
										aumento4 = id4;
										id4=id4+1;
									}
								
								else if(des2 == 2 && conf2 == 2)
									{
										system("cls");
										des2 = 1;
										cantidad = 0;
									}
									
								break;
								
								case 2:
									
									system("cls");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									printf("\t\t\t\t\t\t\t\t\tRenta.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									printf("\t\t\t\t\t\t\tClientes Registrados.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
									
									for(id=0; id<aumento; id++)
										{
											if((nuevo[id].activado) == 1) 
												{
													printf("ID: %d,NOMBRE: %s,CORREO: %s,TELEFONO: %s,DIRECCION: %s, ESTATUS: %d\n", id, nuevo[id].nom, nuevo[id].correo, nuevo[id].tel, nuevo[id].dir, nuevo[id].activado);
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												}
										}
							
									printf("\nIngresa el id que te gustaria seleccionar: "); 
									scanf("%d", &id);
									
									conf = 0;
									
									if ((nuevo[id].activado)==1)
										{
											printf("\a\n\nConfirmar si lo quieres seleccionar.\n");
											printf("1)Seguir con la seleccion.\n2)Ir a un submenu.\nIntroduce tu seleccion: ");
											scanf("%d", &conf);			
										}
										
									else if ((nuevo[id].activado)==0)
										{
											conf = 2;
										}
									
									while(des == 1 && conf == 2) 
										{
											system("cls");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\tSeleccion de Clientes.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
											printf("\aElige otro cliente o ingresa lo que te gustaria hacer.\n");
											printf("1)Seguir eligiendo.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
											scanf("%d", &des);
											
											switch(des)
												{
													case 1:
														system("cls");
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
														printf("\t\t\t\t\t\tClientes Registrados.\n\n");
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														for(id=0; id<aumento; id++)
															{
																if((nuevo[id].activado) == 1)
																	{
																		printf("ID: %d,NOMBRE: %s,CORREO: %s,TELEFONO: %s,DIRECCION: %s, ESTATUS: %d\n", id, nuevo[id].nom, nuevo[id].correo, nuevo[id].tel, nuevo[id].dir, nuevo[id].activado);
																		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																	}
															}
												
													printf("\nIngresa el id que te gustaria seleccionar: "); 
													scanf("%d", &id);
													
													if ((nuevo[id].activado)==1)
														{
															printf("\a\n\nConfirmar si lo quieres seleccionar.\n");
															printf("1)Seguir.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
															scanf("%d", &conf);	
														}
													break;	
												}
										}
										
									if(des == 1 && conf == 1)
										{
											system("cls");	
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\t\t\t\tRenta.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\t\tSeleccionar Libro.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
											
											for(id2=0; id2<aumento2; id2++)
												{
													if((autonuevo[id2].activado2) == 1 && autonuevo[id2].tipo[0] == 'R') 
														{
															printf("PLACA: %d, TITULO: %s, AUTOR: %s, PRECIO: $%1.2f, F.P: %d, CANTIDAD: %d, ESTATUS: %d, TIPO: %c\n", id2, autonuevo[id2].titulo, autonuevo[id2].autor,autonuevo[id2].precio, autonuevo[id2].anio, autonuevo[id2].cantidad,  autonuevo[id2].activado2,autonuevo[id2].tipo[0]);
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														}
												}
									
											printf("\nIngresa la placa que te gustaria seleccionar: "); 
											scanf("%d", &id2);
										
											if ((autonuevo[id2].activado2)==1 && autonuevo[id2].tipo[0] == 'R' &&  autonuevo[id2].cantidad > 0 )
												{
													
													printf("Cuantos te gustaria rentar: ");
													scanf("%d", &cantidad);
													autonuevo[id2].cantidad = autonuevo[id2].cantidad - cantidad;
														
													if(autonuevo[id2].cantidad > 0 )
														{
															printf("\a\n\nConfirmar si lo quieres rentar.\n");
															printf("1)Seguir.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
															scanf("%d", &conf2);
														}
																
												}
												
											else if ((autonuevo[id2].activado2)==0 || autonuevo[id2].tipo[0] == 'V' || autonuevo[id2].cantidad <= 1)
												{
													conf2 = 2;
												}
									
											while(des2 == 1 && conf2 == 2)
												{													
													autonuevo[id2].cantidad = autonuevo[id2].cantidad + cantidad;	
													system("cls");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\tSeleccion de Auto.\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													printf("\aEste auto ya no existe o aun no esta registrado, intentalo de nuevo.\n\n");
													printf("1)Seguir eligiendo.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
													scanf("%d", &des2);
											
											switch(des2)
												{
													case 1:	
														system("cls");	
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
														printf("\t\t\t\t\t\tLibros Registrados.\n\n");
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														
														for(id2=0; id2<aumento2; id2++)
															{
																if((autonuevo[id2].activado2) == 1 && autonuevo[id2].tipo[0] == 'R') 
																	{
																		printf("PLACA: %d, TITULO: %s, AUTOR: %s, PRECIO: $%1.2f, F.P: %d, CANTIDAD: %d, ESTATUS: %d, TIPO: %c\n", id2, autonuevo[id2].titulo, autonuevo[id2].autor,autonuevo[id2].precio, autonuevo[id2].anio, autonuevo[id2].cantidad,  autonuevo[id2].activado2,autonuevo[id2].tipo[0]);
																		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																	}
															}
															
														printf("\nIngresa la placa que te gustaria seleccionar: "); 
														scanf("%d", &id2);
														
														if ((autonuevo[id2].activado2)==1 && autonuevo[id2].tipo[0] == 'R' &&  autonuevo[id2].cantidad > 0)
															{
																
																printf("Cuantos te gustaria rentar: ");
																scanf("%d", &cantidad);
																autonuevo[id2].cantidad = autonuevo[id2].cantidad - cantidad;
														
																if(autonuevo[id2].cantidad > 0 )
																	{
																		printf("\a\n\nConfirmar si lo quieres rentar.\n");
																		printf("1)Seguir.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
																		scanf("%d", &conf2);
																	}
															}
													break;
												}
											}
										}
										
									
									if(des2 == 1 && conf2 == 1)
									{
									
										for(id3=aumento3; id3<=aumento3; id3++)
											{
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
												printf("\t\t\t\t\t\tRenta.\n\n");
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
												rentaprestar[id3].car = id2;
												rentaprestar[id3].us = id;
												rentaprestar[id3].cant = cantidad;
												rentaprestar[id3].tiporl[0] = 'R';
												rentaprestar[id3].estatus = 1;
											}		
									
										system("cls");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\tRenta.\n\n");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
											for(id3=0; id3<=aumento3; id3++)
												{
													
													if(rentaprestar[id3].tiporl[0] == 'R' && rentaprestar[id3].estatus == 1)
														{
															printf("ID: %d,ISBN: %d,RENTO: %d, TIPO: %c, ESTATUS: %d\n", rentaprestar[id3].us, rentaprestar[id3].car,rentaprestar[id3].cant, rentaprestar[id3].tiporl[0],rentaprestar[id3].estatus);
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														}
												}
									
											aumento3 = aumento3+1;
									
											printf("\nAGREGADO CON EXITO\nPresiona enter para continuar.");
											fflush(stdin);
											getchar();
									}
									
									
									if(des == 2 && conf == 2)
										{
											system("cls");
											conf = 0;
											des = 1;
										}

									if(des2 == 2 && conf2 == 2)
										{
											system("cls");
											des2 = 1;
										}
									
								break;
								
								case 3:
									system("cls");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									printf("\t\t\t\t\t\t\t\t\tPrestamo por Choque.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									printf("\t\t\t\t\t\t\tClientes Registrados.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
									
									for(id=0; id<aumento; id++)
										{
											if((nuevo[id].activado) == 1)
												{
													printf("ID: %d,NOMBRE: %s,CORREO: %s,TELEFONO: %s,DIRECCION: %s, ESTATUS: %d\n", id, nuevo[id].nom, nuevo[id].correo, nuevo[id].tel, nuevo[id].dir, nuevo[id].activado);
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												}
										}
							
									printf("\nIngresa el id que te gustaria seleccionar: ");
									scanf("%d", &id);
									
									conf = 0;
									
									if ((nuevo[id].activado)==1)
										{
											printf("\a\n\nConfirmar si lo quieres seleccionar.\n");
											printf("1)Seguir con la seleccion.\n2)Ir a un submenu.\nIntroduce tu seleccion: ");
											scanf("%d", &conf);			
										}
										
									else if ((nuevo[id].activado)==0)
										{
											conf = 2;
										}
									
									while(des == 1 && conf == 2) 
										{
											system("cls");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\tSeleccion de Clientes.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
											printf("\aElige otro cliente o ingresa lo que te gustaria hacer.\n");
											printf("1)Seguir eligiendo.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
											scanf("%d", &des);
											
											switch(des)
												{
													case 1:
														system("cls");
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
														printf("\t\t\t\t\t\tClientes Registrados.\n\n");
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														
														for(id=0; id<aumento; id++)
															{
																if((nuevo[id].activado) == 1)
																	{
																		printf("ID: %d,NOMBRE: %s,CORREO: %s,TELEFONO: %s,DIRECCION: %s, ESTATUS: %d\n", id, nuevo[id].nom, nuevo[id].correo, nuevo[id].tel, nuevo[id].dir, nuevo[id].activado);
																		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																	}
															}
												
													printf("\nIngresa el id que te gustaria seleccionar: ");
													scanf("%d", &id);
													
													if ((nuevo[id].activado)==1)
														{
															printf("\a\n\nConfirmar si lo quieres seleccionar.\n");
															printf("1)Seguir.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
															scanf("%d", &conf);	
														}
													break;	
												}
										}
										
									if(des == 1 && conf == 1)
										{
											system("cls");	
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\t\t\t\tPrestamo.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\t\tSeleccionar Auto.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
											
											for(id2=0; id2<aumento2; id2++)
												{
													if((autonuevo[id2].activado2) == 1)
														{
															printf("PLACA: %d, TITULO: %s, AUTOR: %s, PRECIO: $%1.2f, F.P: %d, CANTIDAD: %d, ESTATUS: %d, TIPO: %c\n", id2, autonuevo[id2].titulo, autonuevo[id2].autor,autonuevo[id2].precio, autonuevo[id2].anio, autonuevo[id2].cantidad,  autonuevo[id2].activado2,autonuevo[id2].tipo[0]);
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														}
												}
									
											printf("\nIngresa la placa que te gustaria seleccionar: "); 
											scanf("%d", &id2);
										
											if ((autonuevo[id2].activado2)==1 &&  autonuevo[id2].cantidad > 0)
												{
													
													printf("Cuantos te gustaria rentar: ");
													scanf("%d", &cantidad);
													autonuevo[id2].cantidad = autonuevo[id2].cantidad - cantidad;
														
													if(autonuevo[id2].cantidad > 0 )
														{
															printf("\a\n\nConfirmar si lo quieres prestar.\n");
															printf("1)Seguir.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
															scanf("%d", &conf2);
														}
																
												}
												
											else if ((autonuevo[id2].activado2)==0 || autonuevo[id2].cantidad <= 1)
												{
													conf2 = 2;
												}
									
											while(des2 == 1 && conf2 == 2)
												{
													
													autonuevo[id2].cantidad = autonuevo[id2].cantidad + cantidad;	
													system("cls");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\tSeleccion de Libros.\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													printf("\aEste auto ya no existe o aun no esta registrado, intentalo de nuevo.\n\n");
													printf("1)Seguir eligiendo.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
													scanf("%d", &des2);
											
											switch(des2)
												{
													case 1:	
														system("cls");	
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
														printf("\t\t\t\t\t\tLibros Registrados.\n\n");
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														
														for(id2=0; id2<aumento2; id2++)
															{
																if((autonuevo[id2].activado2) == 1)
																	{
																		printf("PLACA: %d, TITULO: %s, AUTOR: %s, PRECIO: $%1.2f, F.P: %d, CANTIDAD: %d, ESTATUS: %d, TIPO: %c\n", id2, autonuevo[id2].titulo, autonuevo[id2].autor,autonuevo[id2].precio, autonuevo[id2].anio, autonuevo[id2].cantidad,  autonuevo[id2].activado2,autonuevo[id2].tipo[0]);
																		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																	}
															}
															
														printf("\nIngresa la placa que te gustaria seleccionar: "); 
														scanf("%d", &id2);
														
														if ((autonuevo[id2].activado2)==1 && autonuevo[id2].cantidad > 0)
															{
																
																printf("Cuantos te gustaria rentar: ");
																scanf("%d", &cantidad);
																autonuevo[id2].cantidad = autonuevo[id2].cantidad - cantidad;
														
																if(autonuevo[id2].cantidad > 0 )
																	{
																		printf("\a\n\nConfirmar si lo quieres leer en sala.\n");
																		printf("1)Seguir.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
																		scanf("%d", &conf2);
																	}																	
															}
													break;
												}
											}
										}
										
									
									if(des2 == 1 && conf2 == 1)
									{
									
										for(id3=aumento3; id3<=aumento3; id3++)
											{
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
												printf("\t\t\t\t\t\tLeer.\n\n");
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
												rentaprestar[id3].car = id2;
												rentaprestar[id3].us = id;
												rentaprestar[id3].cant = cantidad;
												rentaprestar[id3].tiporl[0] = 'P';
												rentaprestar[id3].estatus = 1;
											}
	
										system("cls");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\tLeer en Sala.\n\n");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
											for(id3=0; id3<=aumento3; id3++)
												{
													
													if(rentaprestar[id3].tiporl[0] == 'P' && rentaprestar[id3].estatus == 1)
														{
															printf("ID: %d,ISBN: %d,RENTO: %d, TIPO: %c, ESTATUS: %d\n", rentaprestar[id3].us, rentaprestar[id3].car,rentaprestar[id3].cant, rentaprestar[id3].tiporl[0],rentaprestar[id3].estatus);
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														}
												}
									
											aumento3 = aumento3+1;
									
											printf("\nENTREGADO CON EXITO\nPresiona enter para continuar.");
											fflush(stdin);
											getchar();
									}	
									
									if(des == 2 && conf == 2)
										{
											system("cls");
											conf = 0;
											des = 1;
										}

									if(des2 == 2 && conf2 == 2)
										{
											system("cls");
											des2 = 1;
										}
								
								break;
								
								case 4:
									
									system("cls");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									printf("\t\t\t\t\t\tRegresar Libro.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
									for(id3=0; id3<aumento3; id3++)
										{		
											if(rentaprestar[id3].estatus == 1)
												{
													printf("LUGAR: &d, ID: %d, PLACA: %d, RENTO: %d, TIPO: %c, ESTATUS: %d\n", id3, rentaprestar[id3].us, rentaprestar[id3].car,rentaprestar[id3].cant, rentaprestar[id3].tiporl[0],rentaprestar[id3].estatus);
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												}
										}
										
									printf("Selecciona el lugar del auto que vas a regresar: ");
									scanf("%d", &id3);
									
									if ((rentaprestar[id3].estatus)==1)
										{
											printf("\a\n\nConfirmar si lo quieres regresar.\n");
											printf("1)Seguir con la devolucion.\n2)Ir a un submenu.\nIntroduce tu seleccion: ");
											scanf("%d", &conf2);			
										}
										
									else if ((rentaprestar[id3].estatus)==0)
										{
											conf2 = 2;
										}
								
									while(des2 == 1 && conf2 == 2)
										{
											system("cls"); 
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\t\t\tRegresar Auto.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
											printf("\aEste auto ya no existe o aun no esta registrado, intentalo de nuevo.\n\n");
											printf("1)Seguir eligiendo.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
											scanf("%d", &des2);
										
										switch(des2)
											{
												case 1:	
													system("cls");	
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\tRegresar Libros.\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													
													for(id3=0; id3<aumento3; id3++)
														{		
															if(rentaprestar[id3].estatus == 1)
																{
																	printf("LUGAR: &d, ID: %d, PLACA: %d, RENTO: %d, TIPO: %c, ESTATUS: %d\n", id3, rentaprestar[id3].us, rentaprestar[id3].car,rentaprestar[id3].cant, rentaprestar[id3].tiporl[0],rentaprestar[id3].estatus);
																	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																}
														}
														
													printf("\nIngresa el id que te gustaria borrar: "); 
													scanf("%d", &id3);
													
													if ((rentaprestar[id3].estatus)==1)
														{
															printf("\a\n\nConfirmar si lo quieres dar de baja.\n");
															printf("1)Seguir.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
															scanf("%d", &conf2);	
														}
														
												break;
											}
										}
								
									if(des2 == 1 && conf2 == 1)
										{
											
											dev = id3;
											(rentaprestar[id3].estatus)=0;
											autonuevo[rentaprestar[id3].car].cantidad = autonuevo[rentaprestar[id3].car].cantidad + rentaprestar[id3].cant;
											
											if(rentaprestar[id3].tiporl[0] == 'R')
												{
													system("cls");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\tRegresar Libro.\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													
													for(id3=0; id3<aumento3; id3++)
														{		
															if(rentaprestar[id3].estatus == 1)
																{
																	printf("LUGAR: %d, ID: %d, PLACA: %d, RENTO: %d, TIPO: %c, ESTATUS: %d\n", id3, rentaprestar[id3].us, rentaprestar[id3].car,rentaprestar[id3].cant, rentaprestar[id3].tiporl[0],rentaprestar[id3].estatus);
																	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																}
														}
													
													printf("\nACTUALIZACION EXITOSA\nPresiona enter para continuar.");
													fflush(stdin);
													getchar();
													
													system("cls");
													
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\t\t\tPago por devolucion de auto.\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													printf("\t\t\t\t\t\t\t\t\tCostos.\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													printf("\t\t\t\t\t\tDias\t\t\t\t\t\tCantidad\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													printf("\t\t\t\t\t\t1\t\t\t\t\t\t$10\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													printf("\t\t\t\t\t\t2\t\t\t\t\t\t$15\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													printf("\t\t\t\t\t\t3\t\t\t\t\t\t$20\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													printf("\t\t\t\t\t\tN\t\t\t\t\t\tIncrementar $3 por dia\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													
													printf("Ingresa los dias que tardo para devolverlos: ");
													fflush(stdin);
													scanf("%d", &rentaprestar[dev].dias);
													system("cls");
													
													if(rentaprestar[dev].dias==1)
														{
															
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\t\t\t\t\t\t\t\tAgencia FCFM.\n\n");
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\t\t\t\t\t\t\t\tCANTIDAD: %d\n", rentaprestar[dev].cant);
															printf("\t\t\t\t\t\t\t\tPRECIO: $%d\n", mult1(rentaprestar[dev].cant));
															printf("\t\t\t\t\t\t\t\tTOTAL: $%d\n", mult1(rentaprestar[dev].cant));
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\nPAGO CON EXITO\nPresiona enter para continuar.");
															fflush(stdin);
															getchar();
														}
														
													else if(rentaprestar[dev].dias==2)
														{
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\t\t\t\t\t\t\t\tAgencia FCFM.\n\n");
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\t\t\t\t\t\t\t\tCANTIDAD: %d\n",rentaprestar[dev].cant);
															printf("\t\t\t\t\t\t\t\tPRECIO: $%d\n", mult2(rentaprestar[dev].cant));
															printf("\t\t\t\t\t\t\t\tTOTAL: $%d\n", mult2(rentaprestar[dev].cant));
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\nPAGO CON EXITO\nPresiona enter para continuar.");
															fflush(stdin);
															getchar();
														}
														
													else if((rentaprestar[dev].dias) == 3)
														{
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\t\t\t\t\t\t\t\tAgencia FCFM.\n\n");
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\t\t\t\t\t\t\t\tCANTIDAD: %d\n", rentaprestar[dev].cant);
															printf("\t\t\t\t\t\t\t\tPRECIO: $%d\n", mult3(rentaprestar[dev].cant));
															printf("\t\t\t\t\t\t\t\tTOTAL: $%d\n\n", mult3(rentaprestar[dev].cant));
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\nPAGO CON EXITO\nPresiona enter para continuar.");
															fflush(stdin);
															getchar();
														}
														
													else if((rentaprestar[dev].dias) > 3)
														{
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\t\t\t\t\t\t\t\tAgencia FCFM.\n\n");
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\t\t\t\t\t\t\t\tCANTIDAD: %d\n", (rentaprestar[dev].cant));
															printf("\t\t\t\t\t\t\t\tPRECIO $%d\n", mult4((rentaprestar[dev].cant),(rentaprestar[dev].dias)));
															printf("\t\t\t\t\t\t\t\tTOTAL: $%d\n\n", mult4((rentaprestar[dev].cant),(rentaprestar[dev].dias)));
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\nPAGO CON EXITO\nPresiona enter para continuar.");
															fflush(stdin);
															getchar();
														}
												}
											
											else if(rentaprestar[id3].tiporl[0]== 'P')
												{
													system("cls");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\tRegresar Auto.\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													for(id3=0; id3<aumento3; id3++)
														{
															if((rentaprestar[id3].estatus) == 1)
																{
																	printf("LUGAR: %d, ID: %d,ISBN: %d,RENTO: %d, TIPO: %c, ESTATUS:%d\n",id3, rentaprestar[id3].us, rentaprestar[id3].car ,rentaprestar[id3].cant, rentaprestar[id3].tiporl[0],rentaprestar[id3].estatus);
																	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																}
														}
											
													printf("\nACTUALIZACION EXITOSA\nPresiona enter para continuar.");
													fflush(stdin);
													getchar();	
												}
										}
										
									else if(des2 == 2 && conf2 == 2)
										{
											system("cls");
											des2 = 1;
										}
				break;		
						
				
				default: intentos = intentos+1; 
					if(intentos==3)
					{
						system("cls");
						printf("\t\t\t\t\t\t\aSE CIERRA SESION.\n\n");
						return 0;
					}
			}
		}
		}while(opcion != 4);
		
		system("cls");
		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("Adios Juan Manuel Martinez Ramirez.\t\t\t\t\t\t\t%s", ctime(&tiempo));
		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	
	return 0;
}

int mult1(int y)
{
	return (y*10);
}

int mult2(int x)
{
	return (x*15);
}

int mult3(int j)
{
	return (j*20);
}

int mult4(int z, int e)
{
	return (20*(z)+((z)*(e)*3));
}


