#include <stdio.h> 
#include <time.h> 
#include <windows.h>
#include <string.h>

int mult1(int y);
int mult2(int x);
int mult3(int j);
int mult4(int z, int e);

typedef struct 
	{
		char  nom[40], correo[30], dir[40], tel[12];
		int  activado, id;
		
	}tnuevo;
	
typedef struct 
	{
		char titulo[30], autor[40], tipo[1];
		int  anio, cantidad, activado2, id2;
		float precio;
		
	}tautonuevo;
	
typedef struct 
	{
		int us, car, cant, estatus, dias, id3;
		char tiporl[1];
	}trentaprestar;
		
typedef struct 
	{
		int cantauto, auto2, id4;
		float precauto, ivaauto, totalauto;
		
	}tventa;	
		
int main()
{
	HWND hWnd = GetConsoleWindow();
	ShowWindow(hWnd,SW_SHOWMAXIMIZED);
	
	int usuario, contra, intentos=0, opcion, clientes, autos ,biblioteca, aumento=0, aumento2 = 0, id=0, id2=0, lugar, lugar2, num, des=1, des2=1, conf = 0, conf2 = 0, cantidad=0, id3=0, lugar3, aumento3 = 0, id4=0 , aumento4=0, id5=0, aumento5=0, consulta, dev, adeudo, money;
	char tipo[1];

	FILE *crear;
	tnuevo nuevo;
	
	fpos_t *pos;
	
	crear = fopen("Clientes.dat", "ab");
	fclose(crear);

	FILE *crear2;
	tautonuevo autonuevo;
	
	crear2 = fopen("Autonuevo.dat", "ab");
	fclose(crear2);
	
	FILE *crear3;
	trentaprestar rentaprestar;
	
	crear3 = fopen("Rentaprestar.dat", "ab");
	fclose(crear3);
	
	FILE *crear4;
	tventa venta;
	
	crear4 = fopen("Venta.dat", "ab");
	fclose(crear4);

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
									
									id=0;
									crear = fopen("Clientes.dat", "rb"); 
									fread(&nuevo, sizeof(tnuevo), 1, crear);
									while(!feof(crear))
									{
										fread(&nuevo, sizeof(tnuevo), 1, crear);
										id++;
									}
									fclose(crear);
									
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									printf("\t\t\t\t\t\t\t\tNuevo Cliente.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
									
									crear = fopen("Clientes.dat", "ab");
									
									nuevo.id = id;
									printf("Su id es: %d\n", nuevo.id);
									printf("Escribe su nombre completo: ");
									fflush(stdin);
									gets(nuevo.nom);
									printf("Escribe su correo electronico: ");
									fflush(stdin);
									gets(nuevo.correo);
									printf("Escribe su telefono: ");
									fflush(stdin);
									gets(nuevo.tel);
									printf("Escribe su direccion: ");
									fflush(stdin);
									gets(nuevo.dir);
									nuevo.activado=1;
									fwrite(&nuevo, sizeof(tnuevo), 1, crear);
									fclose(crear); 
									
									system("cls");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									printf("\t\t\t\t\t\t\tClientes Registrados.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																		
									id = 0;
									crear = fopen("Clientes.dat", "rb");
									fread(&nuevo, sizeof(tnuevo), 1, crear);
									while(!feof(crear))
									{
											printf("ID: %d, NOMBRE: %s, CORREO: %s, TELEFONO: %s, DIRECCION: %s, ESTATUS: %d\n", nuevo.id, nuevo.nom, nuevo.correo, nuevo.tel, nuevo.dir, nuevo.activado);
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");	
											
										fread(&nuevo, sizeof(tnuevo), 1, crear);
										id++;
									}
									fclose(crear);			
										
									printf("\nAquel que tenga estatus igual a 1, esta activado, si tiene 0, es lo contrario.\nAGREGADO CON EXITO\nPresiona enter para continuar.");
									fflush(stdin);
									getchar();
							break;
					
							case 2: 
						
									system("cls");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									printf("\t\t\t\t\t\t\tClientes Registrados.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
									id=0;									
									crear = fopen("Clientes.dat", "rb");
									fread(&nuevo, sizeof(tnuevo), 1, crear);
									while(!feof(crear))
									{
										if(nuevo.activado==1)
											{
												printf("ID: %d, NOMBRE: %s, CORREO: %s, TELEFONO: %s, DIRECCION: %s, ESTATUS: %d\n", nuevo.id, nuevo.nom, nuevo.correo, nuevo.tel, nuevo.dir, nuevo.activado);
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");	
											}
										fread(&nuevo, sizeof(tnuevo), 1, crear);
										id++;
									}
									fclose(crear);
									
									printf("\nIngresa el id que te gustaria borrar: "); 
									scanf("%d", &aumento);
									
									id=0;
									crear = fopen("Clientes.dat", "rb");
									fread(&nuevo, sizeof(tnuevo), 1, crear);
									while(!feof(crear))
									{
											
										if(aumento==id)
										{
											if(nuevo.activado == 1) 
												{
													printf("\a\n\nConfirmar si lo quieres dar de baja.\n");
													printf("1)Seguir con la eliminacion.\n2)Ir a un submenu.\nIntroduce tu seleccion: ");
													scanf("%d", &conf);	
												}
												
											else if (nuevo.activado == 0)
												{
													conf = 2;
												}
										}
										fread(&nuevo, sizeof(tnuevo), 1, crear);
										id++;
									}
									fclose(crear);
									
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
														
													id=0;	
													crear = fopen("Clientes.dat", "rb");
													fread(&nuevo, sizeof(tnuevo), 1, crear);
													while(!feof(crear))
														{
															if(nuevo.activado==1)
																{
																	printf("ID: %d, NOMBRE: %s, CORREO: %s, TELEFONO: %s, DIRECCION: %s, ESTATUS: %d\n", nuevo.id, nuevo.nom, nuevo.correo, nuevo.tel, nuevo.dir, nuevo.activado);
																	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");	
																}
															fread(&nuevo, sizeof(tnuevo), 1, crear);
															id++;
														}
													fclose(crear);
												
													printf("\nIngresa el id que te gustaria borrar: "); 
													scanf("%d", &aumento);
													
													id=0;
													crear = fopen("Clientes.dat", "rb");
													fread(&nuevo, sizeof(tnuevo), 1, crear);
													while(!feof(crear))
													{
															
														if( aumento==id ){
															if(nuevo.activado == 1)
																{
																	printf("\a\n\nConfirmar si lo quieres dar de baja.\n");
																	printf("1)Seguir con la eliminacion.\n2)Ir a un submenu.\nIntroduce tu seleccion: ");
																	scanf("%d", &conf);	
																}
														}
														fread(&nuevo, sizeof(tnuevo), 1, crear);
														id++;
													}
													fclose(crear);
	
													break;	
												}
											
										}
										
									if(des == 1 && conf == 1)
										{
											system("cls");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\t\tClientes Registrados.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
											
											id = 0;
											crear = fopen("Clientes.dat", "r+b");
											fread(&nuevo, sizeof(tnuevo), 1, crear);
											while(!feof(crear))
												{
													if(aumento == nuevo.id)
														{
															nuevo.activado = 0;
															int pos = ftell(crear)-sizeof(tnuevo);
															fseek(crear, pos, SEEK_SET);
															fwrite(&nuevo,sizeof(tnuevo), 1, crear);
															break;
														}
													fread(&nuevo, sizeof(tnuevo), 1, crear);
													id++;
												}
											fclose(crear);
											
											id = 0;
											crear = fopen("Clientes.dat", "rb");
											fread(&nuevo, sizeof(tnuevo), 1, crear);
											while(!feof(crear))
											{
												if(nuevo.activado==1)
													{
														printf("ID: %d, NOMBRE: %s, CORREO: %s, TELEFONO: %s, DIRECCION: %s, ESTATUS: %d\n", nuevo.id, nuevo.nom, nuevo.correo, nuevo.tel, nuevo.dir, nuevo.activado);
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");	
													}
												fread(&nuevo, sizeof(tnuevo), 1, crear);
												id++;
											}
											fclose(crear);

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
										
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\t\t\t\tNuevo Auto.\n\n");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");		
										
										id2=0;
										crear2 = fopen("Autonuevo.dat", "rb");
										fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
										while(!feof(crear2))
											{
												fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
												id2++;
											}
										fclose(crear2);
										
										crear2 = fopen("Autonuevo.dat", "ab");	
										
										autonuevo.id2 = id2;
										printf("Su placa es: %d\n", id2);
										printf("Escribe el nombre del auto: ");
										fflush(stdin);
										gets(autonuevo.titulo);
										printf("Escribe el nombre de la empresa creadora: ");
										fflush(stdin);
										gets(autonuevo.autor);
										printf("Escribe el tipo de auto que es, si es R de Renta o V de Venta: ");
										fflush(stdin);
										gets(autonuevo.tipo);
											
										if(autonuevo.tipo[0] == 'v')
											{
												autonuevo.tipo[0] = 'V';
											}
											
										else if(autonuevo.tipo[0] == 'r')
											{
												autonuevo.tipo[0] = 'R';
											}
											
										while(autonuevo.tipo[0] !='V' && autonuevo.tipo[0] !='R')
											{
												system("cls");
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
												printf("\t\t\t\t\t\t\t\t\t\tNuevo Auto.\n\n");
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");			
												printf("Su ISBN es: %d\n", autonuevo.id2);
												printf("Escribe el nombre del auto: %s\n", autonuevo.titulo);
												printf("Escribe el nombre de la empresa creadora: %s\n", autonuevo.autor);
												printf("Escribe el tipo de auto que es, si es R de Renta o V de Venta: \a");
												fflush(stdin);
												gets(autonuevo.tipo);
											}
											
										if (autonuevo.tipo[0] == 'V') 
											{
												printf("Escribe el precio: ");
												fflush(stdin);
												scanf("%f", &autonuevo.precio);
											}
										
										else if (autonuevo.tipo[0] == 'R')
											{
												printf("Su precio es de 0.\n");
												autonuevo.precio = 0;
											}
										
										printf("Escribe el a%co de salida: ", 164);
										fflush(stdin);
										scanf("%d", &autonuevo.anio);
										printf("Escribe la cantidad que hay en stock: ");
										fflush(stdin);
										scanf("%d", &autonuevo.cantidad);
										(autonuevo.activado2)=1;	
									
										fwrite(&autonuevo, sizeof(tautonuevo), 1, crear2);
										fclose(crear2);

									system("cls");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									printf("\t\t\t\t\t\t\tAutos Registrados.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
									id2 = 0;
									crear2 = fopen("Autonuevo.dat", "rb");
									fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
									while(!feof(crear2))
									{
											printf("PLACA: %d, TITULO: %s, AUTOR: %s, PRECIO: $%1.2f, F.P: %d, CANTIDAD: %d, ESTATUS: %d, TIPO: %c\n", autonuevo.id2, autonuevo.titulo, autonuevo.autor, autonuevo.precio, autonuevo.anio, autonuevo.cantidad,  autonuevo.activado2, autonuevo.tipo[0]);
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
										fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
										id2++;
									}
									fclose(crear2);

									printf("\nAGREGADO CON EXITO\nPresiona enter para continuar.");
									fflush(stdin);
									getchar();
							break;
							
							case 2: 
								system("cls");	
								
								printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
								printf("\t\t\t\t\t\t\t\tEliminar Auto.\n\n");
								printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
								id2 = 0;
								crear2 = fopen("Autonuevo.dat", "rb");
								fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
								while(!feof(crear2))
									{
											if(autonuevo.activado2 == 1)
												{
													printf("PLACA: %d, TITULO: %s, AUTOR: %s, PRECIO: $%1.2f, F.P: %d, CANTIDAD: %d, ESTATUS: %d, TIPO: %c\n", autonuevo.id2, autonuevo.titulo, autonuevo.autor, autonuevo.precio, autonuevo.anio, autonuevo.cantidad,  autonuevo.activado2, autonuevo.tipo[0]);
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												}
										fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
										id++;
									}
								fclose(crear2);
							
								printf("\nIngresa la placa que te gustaria borrar: "); 
								scanf("%d", &aumento2);
								
								id2 = 0;
								crear2 = fopen("Autonuevo.dat", "rb");
								fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
								while(!feof(crear2))
									{
											if(aumento2 == autonuevo.id2)
												{
													if ((autonuevo.activado2)==1)
														{
															printf("\a\n\nConfirmar si lo quieres dar de baja.\n");
															printf("1)Seguir con la eliminacion.\n2)Ir a un submenu.\nIntroduce tu seleccion: ");
															scanf("%d", &conf2);			
														}
															
													else if ((autonuevo.activado2)==0)
														{
															conf2 = 2;
														}	
												}
										fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
										id2++;
									}
								fclose(crear2);
								
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
												
												id2 = 0;
												crear2 = fopen("Autonuevo.dat", "rb");
												fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
												while(!feof(crear2))
													{
															if(autonuevo.activado2 == 1)
																{
																	printf("PLACA: %d, TITULO: %s, AUTOR: %s, PRECIO: $%1.2f, F.P: %d, CANTIDAD: %d, ESTATUS: %d, TIPO: %c\n", autonuevo.id2, autonuevo.titulo, autonuevo.autor, autonuevo.precio, autonuevo.anio, autonuevo.cantidad,  autonuevo.activado2, autonuevo.tipo[0]);
																	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																}
														fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
														id2++;
													}
												fclose(crear2);
												
												printf("\nIngresa la placa que te gustaria borrar: ");
												scanf("%d", &aumento2);
												
												id2 = 0;
												crear2 = fopen("Autonuevo.dat", "rb");
												fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
												while(!feof(crear2))
													{
															if(aumento2 == autonuevo.id2)
																{
																	if ((autonuevo.activado2)==1)
																		{
																			printf("\a\n\nConfirmar si lo quieres dar de baja.\n");
																			printf("1)Seguir.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
																			scanf("%d", &conf2);	
																		}
																}
														fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
														id2++;
													}
												fclose(crear2);	
											break;
										}
									}
									
								if(des2 == 1 && conf2 == 1)
									{
										system("cls");		
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\t\t\tAutos Registrados.\n\n");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");	
										
										id2 = 0;
										crear2 = fopen("Autonuevo.dat", "r+b"); // Los checa y los elimina //
										fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
										while(!feof(crear2))
											{
												if(aumento2 == autonuevo.id2)
													{
														autonuevo.activado2 = 0;
														int pos = ftell(crear2)-sizeof(tautonuevo);
														fseek(crear2, pos, SEEK_SET);
														fwrite(&autonuevo,sizeof(tautonuevo), 1, crear2);
														break;
													}
												fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
												id2++;
											}
										fclose(crear2);									
					
										id2 = 0;
										crear2 = fopen("Autonuevo.dat", "rb");
										fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
										while(!feof(crear2))
											{
												if(autonuevo.activado2 == 1)
													{
														printf("PLACA: %d, TITULO: %s, AUTOR: %s, PRECIO: $%1.2f, F.P: %d, CANTIDAD: %d, ESTATUS: %d, TIPO: %c\n", autonuevo.id2, autonuevo.titulo, autonuevo.autor, autonuevo.precio, autonuevo.anio, autonuevo.cantidad,  autonuevo.activado2, autonuevo.tipo[0]);
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													}
												fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
												id2++;
											}
										fclose(crear2);
											
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
						printf("\t\t\t\t\t\t\t\tCompra/Renta/Prestamo de Autos.\n\n");
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
									
								id2 = 0;
								crear2 = fopen("Autonuevo.dat", "rb");
								fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
								while(!feof(crear2))
									{
										if(autonuevo.activado2 == 1 && autonuevo.tipo[0] == 'V')
											{
												printf("PLACA: %d, TITULO: %s, AUTOR: %s, PRECIO: $%1.2f, F.P: %d, CANTIDAD: %d, ESTATUS: %d, TIPO: %c\n", autonuevo.id2, autonuevo.titulo, autonuevo.autor, autonuevo.precio, autonuevo.anio, autonuevo.cantidad,  autonuevo.activado2, autonuevo.tipo[0]);
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
											}
										fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
										id2++;
									}
								fclose(crear2);	
								
								printf("\nIngresa la placa que te gustaria comprar: "); 
								scanf("%d", &aumento2);
								
								id2 = 0;
								crear2 = fopen("Autonuevo.dat", "rb");
								fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
								while(!feof(crear2))
									{
										if(aumento2 == autonuevo.id2)
											{
												if ((autonuevo.activado2)==1 && autonuevo.cantidad > 0 && autonuevo.tipo[0] == 'V')
														{
															printf("Cuantos te gustaria comprar: ");
															scanf("%d", &cantidad);
															
															autonuevo.cantidad = autonuevo.cantidad - cantidad;
															
															if(autonuevo.cantidad > 0 )
																{
																	printf("\a\n\nConfirmar si lo quieres comprar.\n");
																	printf("1)Seguir con la compra.\n2)Ir a un submenu.\nIntroduce tu seleccion: ");
																	scanf("%d", &conf2);
																}		
														}
														
												if ((autonuevo.activado2)==0 || autonuevo.cantidad <= 0 || autonuevo.tipo[0] == 'R')
													{
														conf2 = 2;
													}
											}
										fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
										id2++;
									}
								fclose(crear2);	
								
								while(des2 == 1 && conf2 == 2)
									{
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
												printf("\t\t\t\t\t\t\t\tAutos En La Oferta.\n\n");
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												
												id2 = 0;
												crear2 = fopen("Autonuevo.dat", "rb");
												fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
												while(!feof(crear2))
													{
														if(autonuevo.activado2 == 1 && autonuevo.tipo[0] == 'V')
															{
																printf("PLACA: %d, TITULO: %s, AUTOR: %s, PRECIO: $%1.2f, F.P: %d, CANTIDAD: %d, ESTATUS: %d, TIPO: %c\n", autonuevo.id2, autonuevo.titulo, autonuevo.autor, autonuevo.precio, autonuevo.anio, autonuevo.cantidad,  autonuevo.activado2, autonuevo.tipo[0]);
																printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
															}
														fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
														id2++;
													}
												fclose(crear2);
												
												printf("\nIngresa la placa que te gustaria comprar: ");
												scanf("%d", &aumento2);
													
												id2 = 0;
												crear2 = fopen("Autonuevo.dat", "rb");
												fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
												while(!feof(crear2))
													{
														if(aumento2 == autonuevo.id2)
															{
																if ((autonuevo.activado2)==1 && autonuevo.cantidad > 0 && autonuevo.tipo[0] == 'V')
																		{
																			printf("Cuantos te gustaria comprar: ");
																			scanf("%d", &cantidad);
																			
																			autonuevo.cantidad = autonuevo.cantidad - cantidad;
																			
																			if(autonuevo.cantidad > 0 )
																				{
																					printf("\a\n\nConfirmar si lo quieres comprar.\n");
																					printf("1)Seguir con la compra.\n2)Ir a un submenu.\nIntroduce tu seleccion: ");
																					scanf("%d", &conf2);
																				}		
																		}
															}
														fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
														id2++;
													}
												fclose(crear2);
											break;
										}
									}
								
								if(des2 == 1 && conf2 == 1)
									{
										system("cls");	
										
										id2 = 0;
										crear2 = fopen("Autonuevo.dat", "r+b"); // Los checa y los elimina //
										fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
										while(!feof(crear2))
											{
												if(aumento2 == autonuevo.id2)
													{
														money = autonuevo.precio;
														autonuevo.cantidad = autonuevo.cantidad - cantidad;
														int pos = ftell(crear2)-sizeof(tautonuevo);
														fseek(crear2, pos, SEEK_SET);
														fwrite(&autonuevo,sizeof(tautonuevo), 1, crear2);
														break;
													}
												fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
												id2++;
											}
										fclose(crear2);	
										
										id4=0;
										crear4 = fopen("Venta.dat", "rb");
										fread(&venta, sizeof(tventa), 1, crear4);
										while(!feof(crear4))
										{
											fread(&venta, sizeof(tventa), 1, crear4);
											id4++;
										}
										fclose(crear4);
										
										crear4 = fopen("Venta.dat", "ab");
										venta.id4 = id4;
										venta.auto2 = aumento2;
										venta.cantauto = cantidad;
										venta.precauto = cantidad*(money);
										venta.ivaauto = cantidad*(((money)/100)*16);
										venta.totalauto = cantidad*(money+(((money)/100)*16));
										fwrite(&venta, sizeof(tventa), 1, crear4);
										fclose(crear4);
									
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\t\t\tVENTA/RENTA DE AUTOS BISONTE.\n\n");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\t\t\tCANTIDAD: %d\n", venta.cantauto);
										printf("\t\t\t\t\t\t\t\tPRECIO %1.2f\n", venta.precauto);
										printf("\t\t\t\t\t\t\t\tIVA %1.2f\n", venta.ivaauto);
										printf("\t\t\t\t\t\t\t\tTOTAL: %1.2f\n\n", venta.totalauto);
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										
										printf("\nVENTA CON EXITO\nPresiona enter para continuar.");
										fflush(stdin);
										getchar();
										cantidad = 0;
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
									
									id = 0;
									crear = fopen("Clientes.dat", "rb");
									fread(&nuevo, sizeof(tnuevo), 1, crear);
									while(!feof(crear))
										{
											if(nuevo.activado==1)
												{
													printf("ID: %d, NOMBRE: %s, CORREO: %s, TELEFONO: %s, DIRECCION: %s, ESTATUS: %d\n", nuevo.id, nuevo.nom, nuevo.correo, nuevo.tel, nuevo.dir, nuevo.activado);
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");	
												}
											fread(&nuevo, sizeof(tnuevo), 1, crear);
											id++;
										}
									fclose(crear);
							
									printf("\nIngresa el id que te gustaria seleccionar: "); 
									scanf("%d", &aumento);
									
									conf = 0;
									
									id = 0;
									crear = fopen("Clientes.dat", "rb");
									fread(&nuevo, sizeof(tnuevo), 1, crear);
									while(!feof(crear))
										{
											if(aumento == nuevo.id)
												{
													if ((nuevo.activado)==1)
														{
															printf("\a\n\nConfirmar si lo quieres seleccionar.\n");
															printf("1)Seguir con la seleccion.\n2)Ir a un submenu.\nIntroduce tu seleccion: ");
															scanf("%d", &conf);			
														}
														
													else if ((nuevo.activado)==0)
														{
															conf = 2;
														}
												}
											fread(&nuevo, sizeof(tnuevo), 1, crear);
											id++;
										}
									fclose(crear);
									
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
														
														id = 0;
														crear = fopen("Clientes.dat", "rb");
														fread(&nuevo, sizeof(tnuevo), 1, crear);
														while(!feof(crear))
															{
																if(nuevo.activado==1)
																	{
																		printf("ID: %d, NOMBRE: %s, CORREO: %s, TELEFONO: %s, DIRECCION: %s, ESTATUS: %d\n", nuevo.id, nuevo.nom, nuevo.correo, nuevo.tel, nuevo.dir, nuevo.activado);
																		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");	
																	}
																fread(&nuevo, sizeof(tnuevo), 1, crear);
																id++;
															}
														fclose(crear);
												
													printf("\nIngresa el id que te gustaria seleccionar: "); 
													scanf("%d", &aumento);
														
													id = 0;
													crear = fopen("Clientes.dat", "rb");
													fread(&nuevo, sizeof(tnuevo), 1, crear);
													while(!feof(crear))
														{
															if(aumento == nuevo.id)
																{
																	if ((nuevo.activado)==1)
																		{
																			printf("\a\n\nConfirmar si lo quieres seleccionar.\n");
																			printf("1)Seguir con la seleccion.\n2)Ir a un submenu.\nIntroduce tu seleccion: ");
																			scanf("%d", &conf);			
																		}
																}
															fread(&nuevo, sizeof(tnuevo), 1, crear);
															id++;
														}
													fclose(crear);		
													break;	
												}
										}
										
									if(des == 1 && conf == 1)
										{
											system("cls");	
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\t\t\t\tRenta.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\t\tSeleccionar Auto.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												
											id2 = 0;
											crear2 = fopen("Autonuevo.dat", "rb");
											fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
											while(!feof(crear2))
												{
													if(autonuevo.activado2 == 1 && autonuevo.tipo[0] == 'R')
														{
															printf("PLACA: %d, TITULO: %s, AUTOR: %s, PRECIO: $%1.2f, F.P: %d, CANTIDAD: %d, ESTATUS: %d, TIPO: %c\n", autonuevo.id2, autonuevo.titulo, autonuevo.autor, autonuevo.precio, autonuevo.anio, autonuevo.cantidad,  autonuevo.activado2, autonuevo.tipo[0]);
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														}
													fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
													id2++;
												}
											fclose(crear2);

											printf("\nIngresa la placa que te gustaria seleccionar: "); 
											scanf("%d", &aumento2);
											
											id2 = 0;
											crear2 = fopen("Autonuevo.dat", "rb");
											fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
											while(!feof(crear2))
												{
													if(aumento2 == autonuevo.id2)
														{
															if ((autonuevo.activado2)==1 && autonuevo.tipo[0] == 'R' &&  autonuevo.cantidad > 0 )
																{
																	
																	printf("Cuantos te gustaria rentar: ");
																	scanf("%d", &cantidad);
																	autonuevo.cantidad = autonuevo.cantidad - cantidad;
																		
																	if(autonuevo.cantidad > 0 )
																		{
																			printf("\a\n\nConfirmar si lo quieres rentar.\n");
																			printf("1)Seguir.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
																			scanf("%d", &conf2);
																		}
																				
																}
																
															else if ((autonuevo.activado2)==0 || autonuevo.tipo[0] == 'V' || autonuevo.cantidad <= 1)
																{
																	conf2 = 2;
																}	
														}
													fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
													id2++;
												}
											fclose(crear2);
											
										
											
									
											while(des2 == 1 && conf2 == 2)
												{														
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
														
														id2 = 0;
														crear2 = fopen("Autonuevo.dat", "rb");
														fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
														while(!feof(crear2))
															{
																if(autonuevo.activado2 == 1 && autonuevo.tipo[0] == 'R')
																	{
																		printf("PLACA: %d, TITULO: %s, AUTOR: %s, PRECIO: $%1.2f, F.P: %d, CANTIDAD: %d, ESTATUS: %d, TIPO: %c\n", autonuevo.id2, autonuevo.titulo, autonuevo.autor, autonuevo.precio, autonuevo.anio, autonuevo.cantidad,  autonuevo.activado2, autonuevo.tipo[0]);
																		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																	}
																fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
																id2++;
															}
														fclose(crear2);
															
														printf("\nIngresa la placa que te gustaria seleccionar: "); 
														scanf("%d", &aumento2);
														
														id2 = 0;
														crear2 = fopen("Autonuevo.dat", "rb");
														fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
														while(!feof(crear2))
															{
																if(aumento2 == autonuevo.id2)
																	{
																		if ((autonuevo.activado2)==1 && autonuevo.tipo[0] == 'R' &&  autonuevo.cantidad > 0)
																			{
																				
																				printf("Cuantos te gustaria rentar: ");
																				scanf("%d", &cantidad);
																				autonuevo.cantidad = autonuevo.cantidad - cantidad;
																		
																				if(autonuevo.cantidad > 0 )
																					{
																						printf("\a\n\nConfirmar si lo quieres rentar.\n");
																						printf("1)Seguir.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
																						scanf("%d", &conf2);
																					}
																			}
																	}
																fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
																id2++;
															}
														fclose(crear2);
													break;
												}
											}
										}
										
									
									if(des2 == 1 && conf2 == 1)
									{

										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\tRenta.\n\n");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
										
										id2 = 0;
										crear2 = fopen("Autonuevo.dat", "r+b");
										fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
										while(!feof(crear2))
											{
												if(aumento2 == autonuevo.id2)
													{
														autonuevo.cantidad = autonuevo.cantidad - cantidad;
														int pos = ftell(crear2)-sizeof(tautonuevo);
														fseek(crear2, pos, SEEK_SET);
														fwrite(&autonuevo,sizeof(tautonuevo), 1, crear2);
														break;
													}
												fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
												id2++;
											}
										fclose(crear2);	
										
										
										id3=0;
										crear3 = fopen("Rentaprestar.dat", "rb");
										fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
										while(!feof(crear3))
										{
											fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
											id3++;
										}
										fclose(crear3);
										
										crear3 = fopen("Rentaprestar.dat", "ab");
										rentaprestar.id3 = id3;
										rentaprestar.car = aumento2;
										rentaprestar.us = aumento;
										rentaprestar.cant = cantidad;
										rentaprestar.tiporl[0] = 'R';
										rentaprestar.estatus = 1;	
										fwrite(&rentaprestar, sizeof(trentaprestar), 1, crear3);
										fclose(crear3);	
									
										system("cls");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\tRenta.\n\n");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
										id3=0;
										crear3 = fopen("Rentaprestar.dat", "rb");
										fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
										while(!feof(crear3))
											{
												if(rentaprestar.tiporl[0] == 'R' && rentaprestar.estatus == 1)
													{
														printf("ID: %d,ISBN: %d,RENTO: %d, TIPO: %c, ESTATUS: %d\n", rentaprestar.us, rentaprestar.car,rentaprestar.cant, rentaprestar.tiporl[0],rentaprestar.estatus);
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													}
												
												fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
												id3++;
											}
										fclose(crear3);	
									
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
									
									id = 0;
									crear = fopen("Clientes.dat", "rb");
									fread(&nuevo, sizeof(tnuevo), 1, crear);
									while(!feof(crear))
										{
											if(nuevo.activado==1)
												{
													printf("ID: %d, NOMBRE: %s, CORREO: %s, TELEFONO: %s, DIRECCION: %s, ESTATUS: %d\n", nuevo.id, nuevo.nom, nuevo.correo, nuevo.tel, nuevo.dir, nuevo.activado);
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");	
												}
											fread(&nuevo, sizeof(tnuevo), 1, crear);
											id++;
										}
									fclose(crear);
							
									printf("\nIngresa el id que te gustaria seleccionar: "); 
									scanf("%d", &aumento);
									
									conf = 0;
									
									id = 0;
									crear = fopen("Clientes.dat", "rb");
									fread(&nuevo, sizeof(tnuevo), 1, crear);
									while(!feof(crear))
										{
											if(aumento == nuevo.id)
												{
													if ((nuevo.activado)==1)
														{
															printf("\a\n\nConfirmar si lo quieres seleccionar.\n");
															printf("1)Seguir con la seleccion.\n2)Ir a un submenu.\nIntroduce tu seleccion: ");
															scanf("%d", &conf);			
														}
														
													else if ((nuevo.activado)==0)
														{
															conf = 2;
														}
												}
											fread(&nuevo, sizeof(tnuevo), 1, crear);
											id++;
										}
									fclose(crear);
									
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
														
														id = 0;
														crear = fopen("Clientes.dat", "rb");
														fread(&nuevo, sizeof(tnuevo), 1, crear);
														while(!feof(crear))
															{
																if(nuevo.activado==1)
																	{
																		printf("ID: %d, NOMBRE: %s, CORREO: %s, TELEFONO: %s, DIRECCION: %s, ESTATUS: %d\n", nuevo.id, nuevo.nom, nuevo.correo, nuevo.tel, nuevo.dir, nuevo.activado);
																		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");	
																	}
																fread(&nuevo, sizeof(tnuevo), 1, crear);
																id++;
															}
														fclose(crear);
												
													printf("\nIngresa el id que te gustaria seleccionar: "); 
													scanf("%d", &aumento);
														
													id = 0;
													crear = fopen("Clientes.dat", "rb");
													fread(&nuevo, sizeof(tnuevo), 1, crear);
													while(!feof(crear))
														{
															if(aumento == nuevo.id)
																{
																	if ((nuevo.activado)==1)
																		{
																			printf("\a\n\nConfirmar si lo quieres seleccionar.\n");
																			printf("1)Seguir con la seleccion.\n2)Ir a un submenu.\nIntroduce tu seleccion: ");
																			scanf("%d", &conf);			
																		}
																}
															fread(&nuevo, sizeof(tnuevo), 1, crear);
															id++;
														}
													fclose(crear);		
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
											
											id2 = 0;
											crear2 = fopen("Autonuevo.dat", "rb");
											fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
											while(!feof(crear2))
												{
													if(autonuevo.activado2 == 1)
														{
															printf("PLACA: %d, TITULO: %s, AUTOR: %s, PRECIO: $%1.2f, F.P: %d, CANTIDAD: %d, ESTATUS: %d, TIPO: %c\n", autonuevo.id2, autonuevo.titulo, autonuevo.autor, autonuevo.precio, autonuevo.anio, autonuevo.cantidad,  autonuevo.activado2, autonuevo.tipo[0]);
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														}
													fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
													id2++;
												}
											fclose(crear2);

											printf("\nIngresa la placa que te gustaria seleccionar: "); 
											scanf("%d", &aumento2);
											
											id2 = 0;
											crear2 = fopen("Autonuevo.dat", "rb");
											fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
											while(!feof(crear2))
												{
													if(aumento2 == autonuevo.id2)
														{
															if ((autonuevo.activado2)==1 &&  autonuevo.cantidad > 0 )
																{
																	
																	printf("Cuantos te gustaria rentar: ");
																	scanf("%d", &cantidad);
																	autonuevo.cantidad = autonuevo.cantidad - cantidad;
																		
																	if(autonuevo.cantidad > 0 )
																		{
																			printf("\a\n\nConfirmar si lo quieres rentar.\n");
																			printf("1)Seguir.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
																			scanf("%d", &conf2);
																		}
																				
																}
																
															else if ((autonuevo.activado2)==0 || autonuevo.tipo[0] == 'V' || autonuevo.cantidad <= 1)
																{
																	conf2 = 2;
																}	
														}
													fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
													id2++;
												}
											fclose(crear2);
											
										
											
									
											while(des2 == 1 && conf2 == 2)
												{														
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
														printf("\t\t\t\t\t\tAutos Registrados.\n\n");
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														
														id2 = 0;
														crear2 = fopen("Autonuevo.dat", "rb");
														fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
														while(!feof(crear2))
															{
																if(autonuevo.activado2 == 1 && autonuevo.tipo[0] == 'R')
																	{
																		printf("PLACA: %d, TITULO: %s, AUTOR: %s, PRECIO: $%1.2f, F.P: %d, CANTIDAD: %d, ESTATUS: %d, TIPO: %c\n", autonuevo.id2, autonuevo.titulo, autonuevo.autor, autonuevo.precio, autonuevo.anio, autonuevo.cantidad,  autonuevo.activado2, autonuevo.tipo[0]);
																		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																	}
																fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
																id2++;
															}
														fclose(crear2);
															
														printf("\nIngresa la placa que te gustaria seleccionar: "); 
														scanf("%d", &aumento2);
														
														id2 = 0;
														crear2 = fopen("Autonuevo.dat", "rb");
														fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
														while(!feof(crear2))
															{
																if(aumento2 == autonuevo.id2)
																	{
																		if ((autonuevo.activado2)==1 && autonuevo.cantidad > 0)
																			{
																				
																				printf("Cuantos vas a prestar: ");
																				scanf("%d", &cantidad);
																				autonuevo.cantidad = autonuevo.cantidad - cantidad;
																		
																				if(autonuevo.cantidad > 0 )
																					{
																						printf("\a\n\nConfirmar si lo quieres prestar.\n");
																						printf("1)Seguir.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
																						scanf("%d", &conf2);
																					}
																			}
																	}
																fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
																id2++;
															}
														fclose(crear2);
													break;
												}
											}
										}
										
									
									if(des2 == 1 && conf2 == 1)
									{

										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\tPrestar.\n\n");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
										
										id2 = 0;
										crear2 = fopen("Autonuevo.dat", "r+b");
										fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
										while(!feof(crear2))
											{
												if(aumento2 == autonuevo.id2)
													{
														autonuevo.cantidad = autonuevo.cantidad - cantidad;
														int pos = ftell(crear2)-sizeof(tautonuevo);
														fseek(crear2, pos, SEEK_SET);
														fwrite(&autonuevo,sizeof(tautonuevo), 1, crear2);
														break;
													}
												fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
												id2++;
											}
										fclose(crear2);	
										
										
										id3=0;
										crear3 = fopen("Rentaprestar.dat", "rb");
										fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
										while(!feof(crear3))
										{
											fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
											id3++;
										}
										fclose(crear3);
										
										crear3 = fopen("Rentaprestar.dat", "ab");
										rentaprestar.id3 = id3;
										rentaprestar.car = aumento2;
										rentaprestar.us = aumento;
										rentaprestar.cant = cantidad;
										rentaprestar.tiporl[0] = 'P';
										rentaprestar.estatus = 1;	
										fwrite(&rentaprestar, sizeof(trentaprestar), 1, crear3);
										fclose(crear3);	
									
										system("cls");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\tPrestamo.\n\n");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
										id3=0;
										crear3 = fopen("Rentaprestar.dat", "rb");
										fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
										while(!feof(crear3))
											{
												if(rentaprestar.tiporl[0] == 'P' && rentaprestar.estatus == 1)
													{
														printf("ID: %d,ISBN: %d,RENTO: %d, TIPO: %c, ESTATUS: %d\n", rentaprestar.us, rentaprestar.car,rentaprestar.cant, rentaprestar.tiporl[0],rentaprestar.estatus);
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													}
												
												fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
												id3++;
											}
										fclose(crear3);	
									
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
								
								case 4:
									
									system("cls");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									printf("\t\t\t\t\t\tRegresar Auto.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
									id3=0;
									crear3 = fopen("Rentaprestar.dat", "rb");
									fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
									while(!feof(crear3))
										{
											if(rentaprestar.estatus == 1)
												{
													printf("LUGAR: %d, ID: %d,ISBN: %d,RENTO: %d, TIPO: %c, ESTATUS: %d\n", rentaprestar.id3, rentaprestar.us, rentaprestar.car,rentaprestar.cant, rentaprestar.tiporl[0],rentaprestar.estatus);
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												}
												
											fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
											id3++;
										}
									fclose(crear3);	
										
									printf("Selecciona el lugar del auto que vas a regresar: ");
									scanf("%d", &aumento3);
									
									id3=0;
									crear3 = fopen("Rentaprestar.dat", "rb");
									fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
									while(!feof(crear3))
										{
											if(aumento3 == rentaprestar.id3)
												{
													if ((rentaprestar.estatus)==1)
														{
															printf("\a\n\nConfirmar si lo quieres regresar.\n");
															printf("1)Seguir con la devolucion.\n2)Ir a un submenu.\nIntroduce tu seleccion: ");
															scanf("%d", &conf2);
															cantidad = rentaprestar.cant;
															dev = rentaprestar.car;
															tipo[0] = rentaprestar.tiporl[0];				
														}
														
													else if ((rentaprestar.estatus)==0)
														{
															conf2 = 2;
														}
												
												}
												
											fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
											id3++;
										}
									fclose(crear3);	
								
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
													
													id3=0;
													crear3 = fopen("Rentaprestar.dat", "rb");
													fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
													while(!feof(crear3))
														{
															if(rentaprestar.estatus == 1)
																{
																	printf("LUGAR: %d, ID: %d,ISBN: %d,RENTO: %d, TIPO: %c, ESTATUS: %d\n", rentaprestar.id3, rentaprestar.us, rentaprestar.car,rentaprestar.cant, rentaprestar.tiporl[0],rentaprestar.estatus);
																	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																}
																
															fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
															id3++;
														}
													fclose(crear3);	
														
													printf("\nIngresa el id que te gustaria borrar: "); 
													scanf("%d", &aumento3);
													
													id3=0;
													crear3 = fopen("Rentaprestar.dat", "rb");
													fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
													while(!feof(crear3))
														{
															if(aumento3 == rentaprestar.id3)
																{
																	if ((rentaprestar.estatus)==1)
																		{
																			printf("\a\n\nConfirmar si lo quieres regresar.\n");
																			printf("1)Seguir con la devolucion.\n2)Ir a un submenu.\nIntroduce tu seleccion: ");
																			scanf("%d", &conf2);
																			cantidad = rentaprestar.cant;
																			dev = rentaprestar.car;
																			tipo[0] = rentaprestar.tiporl[0];					
																		}
																}
																
															fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
															id3++;
														}
													fclose(crear3);	
														
												break;
											}
										}
								
									if(des2 == 1 && conf2 == 1)
										{
											id3=0;
											crear3 = fopen("Rentaprestar.dat", "r+b");
											fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
											while(!feof(crear3))
											{
												if(aumento3 == rentaprestar.id3)
													{
														rentaprestar.estatus = 0;
														system("cls");
														adeudo = rentaprestar.dias ;
														int pos = ftell(crear3)-sizeof(trentaprestar);
														fseek(crear3, pos, SEEK_SET);
														fwrite(&rentaprestar,sizeof(trentaprestar), 1, crear3);
														break;
													}
												
												fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
												id3++;
											}
											fclose(crear3);
											
											
											if(tipo[0] == 'R')
												{
													system("cls");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\tRegresar Libro.\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													
													id2 = 0;
													crear2 = fopen("Autonuevo.dat", "r+b");
													fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
													while(!feof(crear2))
														{
															if(dev == autonuevo.id2)
																{
																	autonuevo.cantidad = autonuevo.cantidad + cantidad;
																	int pos = ftell(crear2)-sizeof(tautonuevo);
																	fseek(crear2, pos, SEEK_SET);
																	fwrite(&autonuevo,sizeof(tautonuevo), 1, crear2);
																	break;
																	
																}
															fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
															id2++;
														}
													fclose(crear2);	
													
													
													id3=0;
													crear3 = fopen("Rentaprestar.dat", "rb");
													fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
													while(!feof(crear3))
														{
															if(rentaprestar.estatus == 1)
																{
																	printf("LUGAR: %d, ID: %d,ISBN: %d,RENTO: %d, TIPO: %c, ESTATUS: %d\n", rentaprestar.id3, rentaprestar.us, rentaprestar.car,rentaprestar.cant, rentaprestar.tiporl[0],rentaprestar.estatus);
																	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																}
																
															fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
															id3++;
														}
													fclose(crear3);	
													
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
													
													id3 = 0;
													crear3 = fopen("Rentaprestar.dat", "r+b");
													fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
													while(!feof(crear3))
														{
															if(aumento3 == rentaprestar.id3)
																{
																	printf("Ingresa los dias que tardo para devolverlos: ");
																	fflush(stdin);
																	scanf("%d", &rentaprestar.dias);
																	system("cls");
																	adeudo = rentaprestar.dias;
																	int pos = ftell(crear3)-sizeof(trentaprestar);
																	fseek(crear3, pos, SEEK_SET);
																	fwrite(&rentaprestar,sizeof(trentaprestar), 1, crear3);
																	break;
																}
															fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
															id3++;
														}
													fclose(crear3);
													
													if(adeudo == 1)
														{
															
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\t\t\t\t\t\t\t\tAgencia FCFM.\n\n");
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\t\t\t\t\t\t\t\tCANTIDAD: %d\n", cantidad);
															printf("\t\t\t\t\t\t\t\tPRECIO: $%d\n", mult1(cantidad));
															printf("\t\t\t\t\t\t\t\tTOTAL: $%d\n", mult1(cantidad));
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\nPAGO CON EXITO\nPresiona enter para continuar.");
															fflush(stdin);
															getchar();
														}
														
													else if(adeudo == 2)
														{
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\t\t\t\t\t\t\t\tAgencia FCFM.\n\n");
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\t\t\t\t\t\t\t\tCANTIDAD: %d\n",cantidad);
															printf("\t\t\t\t\t\t\t\tPRECIO: $%d\n", mult2(cantidad));
															printf("\t\t\t\t\t\t\t\tTOTAL: $%d\n", mult2(cantidad));
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\nPAGO CON EXITO\nPresiona enter para continuar.");
															fflush(stdin);
															getchar();
														}
														
													else if(adeudo == 3)
														{
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\t\t\t\t\t\t\t\tAgencia FCFM.\n\n");
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\t\t\t\t\t\t\t\tCANTIDAD: %d\n", cantidad);
															printf("\t\t\t\t\t\t\t\tPRECIO: $%d\n", mult3(cantidad));
															printf("\t\t\t\t\t\t\t\tTOTAL: $%d\n\n", mult3(cantidad));
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\nPAGO CON EXITO\nPresiona enter para continuar.");
															fflush(stdin);
															getchar();
														}
														
													else if(adeudo > 3)
														{
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\t\t\t\t\t\t\t\tAgencia FCFM.\n\n");
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\t\t\t\t\t\t\t\tCANTIDAD: %d\n", cantidad);
															printf("\t\t\t\t\t\t\t\tPRECIO $%d\n", mult4((cantidad),(adeudo)));
															printf("\t\t\t\t\t\t\t\tTOTAL: $%d\n\n", mult4((cantidad),(adeudo)));
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
															printf("\nPAGO CON EXITO\nPresiona enter para continuar.");
															fflush(stdin);
															getchar();
														}
												}
											
											else if(tipo[0] == 'P')
												{
													system("cls");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\tRegresar Auto.\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													
													id2 = 0;
													crear2 = fopen("Autonuevo.dat", "r+b");
													fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
													while(!feof(crear2))
														{
															if(dev == autonuevo.id2)
																{
																	autonuevo.cantidad = autonuevo.cantidad + cantidad;
																	int pos = ftell(crear2)-sizeof(tautonuevo);
																	fseek(crear2, pos, SEEK_SET);
																	fwrite(&autonuevo,sizeof(tautonuevo), 1, crear2);
																	break;
																	
																}
															fread(&autonuevo, sizeof(tautonuevo), 1, crear2);
															id2++;
														}
													fclose(crear2);	
													
													
													id3=0;
													crear3 = fopen("Rentaprestar.dat", "rb");
													fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
													while(!feof(crear3))
														{
															if(rentaprestar.estatus == 1)
																{
																	printf("LUGAR: %d, ID: %d,ISBN: %d,RENTO: %d, TIPO: %c, ESTATUS: %d\n", rentaprestar.id3, rentaprestar.us, rentaprestar.car,rentaprestar.cant, rentaprestar.tiporl[0],rentaprestar.estatus);
																	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																}
																
															fread(&rentaprestar, sizeof(trentaprestar), 1, crear3);
															id3++;
														}
													fclose(crear3);	
											
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


