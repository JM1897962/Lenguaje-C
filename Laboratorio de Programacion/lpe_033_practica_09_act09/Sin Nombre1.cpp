#include <stdio.h> 
#include <time.h> 
#include <windows.h>
#include <string.h>

// Estas son las estructuras necesarias para el funcionamiento del programa //

// La primera estructura sirve para los registros de los clientes nuevos //
struct nuevo
	{
		char  nom[40], correo[30], dir[40], tel[12];
		int  activado;
		
	}nuevo[1000];
	
// La segunda estructura funciona para los libros nuevos a registrar //
struct libronuevo
	{
		char titulo[30], autor[40], editorial[30], tipo[1];
		int  anio, cantidad, activado2;
		float precio;
		
	}libronuevo[1000];
	
// La tercera estructura funciona para guardar las rentas de los libros, sirve para las consultas //
struct rentaleer
	{
		time_t tiempos;
		int us, lib, cant, estatus, dias;
		char tiporl[1];
	}rentaleer[1000];
	
//La cuarta lo que hace es colocar un contador de los libros que han sido vendidos a lo largo del periodo establecido en la biblioteca //	
struct venta
	{
		int cantlib, lib2;
		float preclib, ivalib, totaliva;
		
	}venta[1000];	
		
int main()
{
	FILE * flujo = fopen("PIA.txt","r");
	
	int usuario,dias, contra, intentos=0, opcion, clientes, libro,biblioteca, aumento=0, aumento2 = 0, id=0, id2=0, lugar, lugar2, num, des=1, des2=1, conf = 0, conf2 = 0, cantidad=0, id3=0, lugar3, aumento3 = 0, id4=0 , aumento4=0, id5=0, aumento5=0, consulta;

	time_t tiempo;
	time(&tiempo);
	
	// En esta primera seccion del programa, pedira el ID del Usuario o trabajador de la Biblioteca, siendo nuestras matriculas los usuarios y contraseñas //
	
	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("\t\t\t\t\t\t\t\t\tBiblioteca.\n\n");
	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");	
	printf("Usuario: ");
	scanf("%d", &usuario);
	
	// En los While, si los usuarios son diferentes, lo volvera a pedir, si se equivoca mas de tres veces, se cierra la sesion y se termina el programa //
	
	while(usuario != 1907995 && usuario != 1941436 && usuario != 1897962 && usuario != 1842829)
	{
		system("cls");
		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("\t\t\t\t\t\t\t\t\tBiblioteca.\n\n");
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
	
	// Aqui, si en dado caso coloco un usuario correcto, pedira la contraseña del usuario, la cual como se habia comentado con anterioridad, es la misma matricula del usuario //
	
	system("cls");
	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
	printf("\t\t\t\t\t\t\t\t\tBiblioteca.\n\n");
	printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
	printf("Usuario: %d", usuario);
	printf("\nContrase%ca: ", 164);
	scanf("%d", &contra);
	intentos=0;
	
	// De igual forma, si se llega a equivocar 3 veces con la contraseña se cierra la sesion //
	
	while(contra != 1907995 && contra != 1941436 && contra != 1897962 && contra != 1842829)
	{
		system("cls");
		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
		printf("\t\t\t\t\t\t\t\t\tBiblioteca.\n\n");
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
	
	do // Ciclo para seleccionar que quieres hacer y quien eres, dependiendo a tu respectiva matricula //
		{
	
			if(usuario==1897962)
				{
					system("cls");
					printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
					printf("Bienvenido Juan Manuel Martinez Ramirez.\t\t\t\t\t\t\t\t\t\t\t\t       %s", ctime(&tiempo));
					printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					printf("\t\t\t\t\t\t\t\tBiblioteca FCFM.\n\n1)Clientes.\n2)Libros.\n3)Biblioteca.\n4)Consultas.\n5)Salir.\n\nIngresa tu opcion: ");
					scanf("%d", &opcion);	
				}


				if(usuario==1842829)
					{
						system("cls");
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
						printf("Bienvenido Ana Lizbeth Dominguez Garza.\t\t\t\t\t\t\t\t\t\t\t\t\t        %s", ctime(&tiempo));
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
						printf("\t\t\t\t\t\t\tBiblioteca FCFM.\n\n1)Clientes.\n2)Libros.\n3)Biblioteca.\n4)Consultas.\n5)Salir.\n\nIngresa tu opcion: ");
						scanf("%d", &opcion);
					}
			
				if(usuario==1941436)
					{
						system("cls");
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
						printf("Bienvenido Angel Ledezma Zavala.        \t\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&tiempo));
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
						printf("\t\t\t\t\t\t\tBiblioteca FCFM.\n\n1)Clientes.\n2)Libros.\n3)Biblioteca.\n4)Consultas.\n5)Salir.\n\nIngresa tu opcion: ");
						scanf("%d", &opcion);
					}
			
				if(usuario==1907995)
			{
				system("cls");
				printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
				printf("Bienvenido Luis Armando Villanueva Garcia.\t\t\t\t\t\t\t\t\t\t\t\t%s", ctime(&tiempo));
				printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
				printf("\t\t\t\t\t\t\tBiblioteca FCFM.\n\n1)Clientes.\n2)Libros.\n3)Biblioteca.\n4)Consultas.\n5)Salir.\n\nIngresa tu opcion: ");
				scanf("%d", &opcion);
			}
			
			// En los cuatro usuarios, vienen establecidos las opciones, pueden ser 5 opciones, entrara en un switch y ejecutara su respectiva actividad, al seleccionar una, entrara a un submenu, si en dado caso se equivoca mas de 3 veces, se cierra sesion //
			
			switch(opcion)
			{
				case 1: 
				
						//En la seccion clientes comenzara a deslizar un menu con 3 opciones //
				
						system("cls");
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
						printf("\t\t\t\t\t\t\t\t\tClientes.\n\n");
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
						printf("1)Nuevo Cliente.\n2)Eliminar Cliente.\n3)Regresar al Menu Principal.\n\nIngresa tu opcion: ");
						scanf("%d", &clientes);
						
						switch(clientes)
						{
							case 1: 
							
									// En esta parte, el alumno procedera a agregar los datos de cada cliente que se añada, estos vienen en la parte de arriba declarados en una estructura //
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
									
									// Imprimira a todos los usuarios, sin importar si su activacion es 0 o 1 //
									for(id=0; id<=aumento; id++)
										{
											if((nuevo[id].activado) == 1 ||  (nuevo[id].activado) == 0)
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
							
									// En esta parte se procedera a eliminar uno de los clientes que se encuentren en las listas, mostrandose los que ya no existen o los que existen todavia //
									
									system("cls");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									printf("\t\t\t\t\t\t\tClientes Registrados.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
									
									for(id=0; id<=aumento-1; id++)
										{
											if((nuevo[id].activado) == 1 ||  (nuevo[id].activado) == 0) //Apareceran los que tienen el estatus activado y apagado //
												{
													printf("ID: %d,NOMBRE: %s,CORREO: %s,TELEFONO: %s,DIRECCION: %s, ESTATUS: %d\n", id, nuevo[id].nom, nuevo[id].correo, nuevo[id].tel, nuevo[id].dir, nuevo[id].activado);
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												}
										}
							
									printf("\nIngresa el id que te gustaria borrar: "); // Elimina a los clientes que tengan el id comentado//
									scanf("%d", &id);
									
									// Te pedira una confirmacion para la eliminacion de dichos clientes //
									
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
										
											// Si en dado caso, el dato que ingreso para eliminar al cliente aun no existe o ya fue eliminado ingresara a este menu //
											
											printf("\aElige otro cliente o ingresa lo que te gustaria hacer.\n");
											printf("1)Seguir eligiendo.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
											scanf("%d", &des);
											
											// Dependera de la desicion que tome el usuario es lo que hara el programa, saldra o entrara a volver a elegir otro cliente //
											
											switch(des)
												{
													case 1:
														system("cls");
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
														printf("\t\t\t\t\t\t\tClientes Registrados.\n\n");
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														
														// Si desea seguir eligiendo volvera a repetir el proceso pasado en un bucle //
														
														for(id=0; id<=aumento-1; id++)
															{
																if((nuevo[id].activado) == 1 ||  (nuevo[id].activado) == 0) //Apareceran los que tienen el estatus activado y apagado //
																	{
																		printf("ID: %d,NOMBRE: %s,CORREO: %s,TELEFONO: %s,DIRECCION: %s, ESTATUS: %d\n", id, nuevo[id].nom, nuevo[id].correo, nuevo[id].tel, nuevo[id].dir, nuevo[id].activado);
																		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																	}
															}
												
													printf("\nIngresa el id que te gustaria borrar: "); // Elimina a los clientes que tengan el id comentado//
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
										
										// Aqui apareceran los clientes ya eliminados y los que aun no estan eliminados //
									if(des == 1 && conf == 1)
										{
											(nuevo[id].activado)=0;
											system("cls");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\t\tClientes Registrados.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
											for(id=0; id<=aumento-1; id++)
												{
													if((nuevo[id].activado) == 1 ||  (nuevo[id].activado) == 0)
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
									
									// Si en dado caso no elimino a nadie, los valores seran estos y volveremos al principio del programa // 
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
				
						// De igual forma aqui aparecera un submenu donde deben de aparecer las opciones que se quieran realizar con los libros //
						
						system("cls");
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
						printf("\t\t\t\t\t\t\t\tLibros.\n\n");
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
						printf("1)Nuevo Libro.\n2)Editar Libro.\n3)Eliminar Libro.\n4)Regresar al Menu Principal.\n\nIngresa tu opcion: ");
						scanf("%d", &libro);
						
						// Eligira alguna y entrara a un switch //
						
						switch(libro)
							{
								case 1: system("cls");
									
									// Ingresara los datos del libro nuevo en esta estructura //
									
									id2 = lugar2;
									for(id2=aumento2; id2<=aumento2; id2++)
										{
												
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\t\t\t\tNuevo Libro.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");			
											printf("Su ISBN es: %d\n", id2);
											printf("Escribe el nombre del libro: ");
											fflush(stdin);
											gets(libronuevo[id2].titulo);
											printf("Escribe el nombre del autor: ");
											fflush(stdin);
											gets(libronuevo[id2].autor);
											printf("Escribe el tipo de libro que es, si es R de Renta o V de Venta: ");
											fflush(stdin);
											gets(libronuevo[id2].tipo);
											
											// Aqui ocurre algo interesante, si ingresa una v o r minusculas, se transformaran en mayusculas en automatico para la operacion del programa //
											
											if(libronuevo[id2].tipo[0] == 'v')
											{
												libronuevo[id2].tipo[0] = 'V';
											}
											
											else if(libronuevo[id2].tipo[0] == 'r')
											{
												libronuevo[id2].tipo[0] = 'R';
											}
											
											// Entraran a un while, el cual mientras las letras que se ingresen sean diferentes de V o R, estara repitiendose hasta tener un dato de estos //
											
											while(libronuevo[id2].tipo[0] !='V' && libronuevo[id2].tipo[0] !='R')
											{
												system("cls");
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
												printf("\t\t\t\t\t\t\t\t\t\tNuevo Libro.\n\n");
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");			
												printf("Su ISBN es: %d\n", id2);
												printf("Escribe el nombre del libro: %s\n", libronuevo[id2].titulo);
												printf("Escribe el nombre del autor: %s\n", libronuevo[id2].autor);
												printf("Escribe el tipo de libro que es, si es R de Renta o V de Venta: \a");
												fflush(stdin);
												gets(libronuevo[id2].tipo);
											}
											
											// De igual forma, ocurriran dos eventos diferentes a las letras que se tengan, si es V, pedira el valor del libro, y si es R, su valor sera 0 en automatico //

										if (libronuevo[id2].tipo[0] == 'V') 
											{
												printf("Escribe el precio: ");
												fflush(stdin);
												scanf("%f", &libronuevo[id2].precio);
											}
										
										else if (libronuevo[id2].tipo[0] == 'R')
											{
												printf("Su precio es de 0.\n");
												libronuevo[id2].precio = 0;
											}
										
											printf("Escribe el a%co de publicacion: ", 164);
											fflush(stdin);
											scanf("%d", &libronuevo[id2].anio);
											printf("Escribe la cantidad que hay en stock: ");
											fflush(stdin);
											scanf("%d", &libronuevo[id2].cantidad);
											printf("Escribe la editorial: ");
											fflush(stdin);
											gets(libronuevo[id2].editorial);
											(libronuevo[id2].activado2)=1;	
										}
									
									system("cls");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									printf("\t\t\t\t\t\t\tLibros Registrados.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
									// Imprimira los libros que se tengan en memoria, desde los que estan activados, hasta los desactivados en este ciclo for //
									
									for(id2=0; id2<=aumento2; id2++)
										{
											if((libronuevo[id2].activado2) == 1 || (libronuevo[id2].activado2)==0)
												{
												printf("ID: %d,TITULO: %s,AUTOR: %s,PRECIO: $%1.2f,F.P: %d,CANTIDAD: %d,EDITORIAL: %s,ESTATUS: %d,TIPO: %c\n", id2, libronuevo[id2].titulo, libronuevo[id2].autor,libronuevo[id2].precio, libronuevo[id2].anio, libronuevo[id2].cantidad,  libronuevo[id2].editorial,libronuevo[id2].activado2,libronuevo[id2].tipo[0]);
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												}
										}
									
									aumento2 = aumento2+1;
									printf("\nAGREGADO CON EXITO\nPresiona enter para continuar.");
									fflush(stdin);
									getchar();
							break;
							
							case 2: 
							
							system("cls");
							
							// Acá hara algo totalmente curioso, ya que imprimira todos los libros, para que se sepa cuales ya fueron eliminados y cuales no, para poder modificar algunos datos del libro //
							
							printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
							printf("\t\t\t\t\t\t\tModificar Libro.\n\n");
							printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n\n");
	
							for(id2=0; id2<=aumento2-1; id2++)
								{
									if((libronuevo[id2].activado2) == 1 || (libronuevo[id2].activado2)==0)
										{
											printf("ID: %d,TITULO: %s,AUTOR: %s,PRECIO: $%1.2f,F.P: %d,CANTIDAD: %d,EDITORIAL: %s,ESTATUS: %d,TIPO: %c\n", id2, libronuevo[id2].titulo, libronuevo[id2].autor,libronuevo[id2].precio, libronuevo[id2].anio, libronuevo[id2].cantidad,  libronuevo[id2].editorial,libronuevo[id2].activado2, libronuevo[id2].tipo[0]);
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
										}
								}
							
							printf("\nIngresa el ISBN que te gustaria modificar: ");
							scanf("%d", &id2);
				
							system("cls");
							
							printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
							printf("\t\t\t\t\t\t\t\tModificacion.\n\n");
							printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
							

							printf("Escribe el tipo de libro que es, si es R de Renta o V de Venta: ");
							fflush(stdin);
							gets(libronuevo[id2].tipo);
							
							// Hara lo mismo de arriba con el tipo de libro que sea //
							
							if(libronuevo[id2].tipo[0] == 'v')
								{
									libronuevo[id2].tipo[0] = 'V';
								}
											
							else if(libronuevo[id2].tipo[0] == 'r')
								{
									libronuevo[id2].tipo[0] = 'R';
								}
											
							while(libronuevo[id2].tipo[0] !='V' && libronuevo[id2].tipo[0] !='R')
								{
									system("cls");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									printf("\t\t\t\t\t\t\t\tModificacion.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									printf("Escribe el tipo de libro que es, si es R de Renta o V de Venta: \a");
									fflush(stdin);
									gets(libronuevo[id2].tipo);
								}
											

							if (libronuevo[id2].tipo[0] == 'V') //Determinar que valga 0 cuando es Renta y que valga algo si es venta TIENE FALLAS// 
								{
									printf("Escribe el precio: ");
									fflush(stdin);
									scanf("%f", &libronuevo[id2].precio);
								}
										
							else if (libronuevo[id2].tipo[0] == 'R')
								{
									printf("Su precio es de 0.\n");
									libronuevo[id2].precio = 0;
								}

							printf("Escribe la cantidad que hay en stock: ");
							fflush(stdin);
							scanf("%d", &libronuevo[id2].cantidad);
								
							system("cls");	
							printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
							printf("\t\t\t\t\t\t\t\tLibros Registrados.\n\n");
							printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
							// Aqui apareceran los libros con sus respectivas modificaciones //
							
							for(id2=0; id2<=aumento2-1; id2++)
								{
									if((libronuevo[id2].activado2) == 1 || (libronuevo[id2].activado2)==0)
										{
											printf("ID: %d,TITULO: %s,AUTOR: %s,PRECIO: $%1.2f,F.P: %d,CANTIDAD: %d,EDITORIAL: %s,ESTATUS: %d,TIPO: %c\n", id2, libronuevo[id2].titulo, libronuevo[id2].autor,libronuevo[id2].precio, libronuevo[id2].anio, libronuevo[id2].cantidad,  libronuevo[id2].editorial,libronuevo[id2].activado2, libronuevo[id2].tipo[0]);
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
										}
								}
							
							printf("\nMODIFICADO CON EXITO CON EXITO\nPresiona enter para continuar.");
							fflush(stdin);
							getchar();
							
							break;
							
							case 3: 
								system("cls");	
								
								// De forma parecida, pedira el id del libro, el cual sera seleccionado y se analizara si ya fue eliminado o aun no //
								
								printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
								printf("\t\t\t\t\t\t\t\tEliminar Libro.\n\n");
								printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
								for(id2=0; id2<=aumento2-1; id2++)
									{
										if((libronuevo[id2].activado2) == 1 || (libronuevo[id2].activado2)==0)
											{
												printf("ID: %d,TITULO: %s,AUTOR: %s,PRECIO: $%1.2f,F.P: %d,CANTIDAD: %d,EDITORIAL: %s,ESTATUS: %d,TIPO: %c\n", id2, libronuevo[id2].titulo, libronuevo[id2].autor,libronuevo[id2].precio, libronuevo[id2].anio, libronuevo[id2].cantidad,  libronuevo[id2].editorial,libronuevo[id2].activado2,libronuevo[id2].tipo[0]);
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
											}
									}
							
								printf("\nIngresa el ISBN que te gustaria borrar: "); 
								scanf("%d", &id2);
								
								// Si el libro aun no es eliminado, preguntara que si quiere que sea eliminado, o si reingresara a un submenu para saber que hacer //
								
								if ((libronuevo[id2].activado2)==1)
										{
											printf("\a\n\nConfirmar si lo quieres dar de baja.\n");
											printf("1)Seguir con la eliminacion.\n2)Ir a un submenu.\nIntroduce tu seleccion: ");
											scanf("%d", &conf2);			
										}
										
								else if ((libronuevo[id2].activado2)==0)
									{
										conf2 = 2;
									}
							
								while(des2 == 1 && conf2 == 2)
									{
										system("cls");
										
										// Entrara al ciclo while, y decidira que hacer en cuanto al proyecto //
										
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\t\t\tEliminacion de Libros.\n\n");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
										printf("\aEste libro ya no existe o aun no esta registrado, intentalo de nuevo.\n\n");
										printf("1)Seguir eligiendo.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
										scanf("%d", &des2);
										
										// Si se desea la primera opcion entrara y seleccionara un nuevo libro //
									
									switch(des2)
										{
											case 1:	
												system("cls");	
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
												printf("\t\t\t\t\t\tLibros Registrados.\n\n");
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												for(id2=0; id2<=aumento2-1; id2++)
													{
														if((libronuevo[id2].activado2) == 1 || (libronuevo[id2].activado2)==0)
															{
																printf("ID: %d,TITULO: %s,AUTOR: %s,PRECIO: $%1.2f,F.P: %d,CANTIDAD: %d,EDITORIAL: %s,ESTATUS: %d, TIPO: %c\n", id2, libronuevo[id2].titulo, libronuevo[id2].autor,libronuevo[id2].precio, libronuevo[id2].anio, libronuevo[id2].cantidad,  libronuevo[id2].editorial,libronuevo[id2].activado2,libronuevo[id2].tipo[0]);
																printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
															}
													}
												printf("\nIngresa el id que te gustaria borrar: "); // Elimina a los libros que tengan el id comentado//
												scanf("%d", &id2);
												
												if ((libronuevo[id2].activado2)==1)
													{
														printf("\a\n\nConfirmar si lo quieres dar de baja.\n");
														printf("1)Seguir.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
														scanf("%d", &conf2);	
													}
													
													// Volvera a preguntar si quiere ser eliminado, o no //
											break;
										}
									}
									
							// Si el caso es positivo, se eliminaran los libros //
								if(des2 == 1 && conf2 == 1)
									{
										(libronuevo[id2].activado2)=0;	
										system("cls");		
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\t\t\tLibros Registrados.\n\n");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");	
										for(id2=0; id2<=aumento2-1; id2++)
											{
												if((libronuevo[id2].activado2) == 1 || (libronuevo[id2].activado2)==0)
													{
														printf("ID: %d,TITULO: %s,AUTOR: %s,PRECIO: $%1.2f,F.P: %d,CANTIDAD: %d,EDITORIAL: %s,ESTATUS: %d, TIPO: %c\n", id2, libronuevo[id2].titulo, libronuevo[id2].autor,libronuevo[id2].precio, libronuevo[id2].anio, libronuevo[id2].cantidad,  libronuevo[id2].editorial,libronuevo[id2].activado2, libronuevo[id2].tipo[0]);
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													}
											}
										printf("\nBORRADO CON EXITO\nPresiona enter para continuar.");
										fflush(stdin);
										getchar();
									}
									
								// Si no, volvera al menu principal //
								
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
						
				case 3: system("cls");
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
						printf("\t\t\t\t\t\t\t\tBiblioteca.\n\n");
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
						printf("1)Comprar Libro.\n2)Rentar Libro.\n3)Prestamo en Sala.\n4)Regresar Libro.\n5)Regresar al Menu Principal\n\nIngresa tu opcion: ");
						scanf("%d", &biblioteca);
						
						switch(biblioteca)
							{
								case 1:
								system("cls");	
								printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
								printf("\t\t\t\t\t\t\t\t\t\tCompra.\n\n");
								printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
								printf("\t\t\t\t\t\t\t\t\tLibros En La Biblioteca.\n\n");
								printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
								for(id2=0; id2<=aumento2-1; id2++)
									{
										if((libronuevo[id2].activado2) == 1 && libronuevo[id2].tipo[0] == 'V')
											{
												printf("ID: %d,TITULO: %s,AUTOR: %s,PRECIO: $%1.2f,F.P: %d,CANTIDAD: %d,EDITORIAL: %s,ESTATUS: %d,TIPO: %c\n", id2, libronuevo[id2].titulo, libronuevo[id2].autor,libronuevo[id2].precio, libronuevo[id2].anio, libronuevo[id2].cantidad,  libronuevo[id2].editorial,libronuevo[id2].activado2,libronuevo[id2].tipo[0]);
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
											}
									}
							
								printf("\nIngresa el ISBN que te gustaria comprar: "); 
								scanf("%d", &id2);
								
								if ((libronuevo[id2].activado2)==1 && libronuevo[id2].cantidad > 0 && libronuevo[id2].tipo[0] == 'V')
										{
											printf("Cuantos te gustaria comprar: ");
											scanf("%d", &cantidad);
											
											libronuevo[id2].cantidad = libronuevo[id2].cantidad - cantidad;
											
											if(libronuevo[id2].cantidad > 0 )
												{
													printf("\a\n\nConfirmar si lo quieres comprar.\n");
													printf("1)Seguir con la compra.\n2)Ir a un submenu.\nIntroduce tu seleccion: ");
													scanf("%d", &conf2);
												}		
										}
										
								if ((libronuevo[id2].activado2)==0 || libronuevo[id2].cantidad <= 0 || libronuevo[id2].tipo[0] == 'R')
									{
										conf2 = 2;
									}
							
								while(des2 == 1 && conf2 == 2)
									{
										libronuevo[id2].cantidad = libronuevo[id2].cantidad + cantidad;	
										system("cls");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\t\t\tCompra de Libros.\n\n");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
										printf("\aEste libro ya no existe, aun no esta registrado, solo esta para renta, o solo queda uno en stock, intentalo de nuevo.\n\n");
										printf("1)Seguir eligiendo.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
										scanf("%d", &des2);
									
									switch(des2)
										{
											case 1:	
												system("cls");	
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
												printf("\t\t\t\t\t\t\t\tLibros En La Biblioteca.\n\n");
												printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												for(id2=0; id2<=aumento2-1; id2++)
													{
														if((libronuevo[id2].activado2) == 1 && libronuevo[id2].tipo[0] == 'V')
															{
																printf("ID: %d,TITULO: %s,AUTOR: %s,PRECIO: $%1.2f,F.P: %d,CANTIDAD: %d,EDITORIAL: %s,ESTATUS: %d, TIPO: %c\n", id2, libronuevo[id2].titulo, libronuevo[id2].autor,libronuevo[id2].precio, libronuevo[id2].anio, libronuevo[id2].cantidad,  libronuevo[id2].editorial,libronuevo[id2].activado2,libronuevo[id2].tipo[0]);
																printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
															}
													}
												printf("\nIngresa el ISBN que te gustaria comprar: "); // Resta a los libros que tengan el id comentado//
												scanf("%d", &id2);
												
												if ((libronuevo[id2].activado2)==1 && libronuevo[id2].cantidad > 0 && libronuevo[id2].tipo[0] == 'V')
													{
														printf("Cuantos te gustaria comprar: ");
														scanf("%d", &cantidad);
														libronuevo[id2].cantidad = libronuevo[id2].cantidad - cantidad;
														
														if(libronuevo[id2].cantidad > 0 )
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
										
										venta[id4].lib2 = id2;
										venta[id4].cantlib = cantidad;
										venta[id4].preclib = cantidad*(libronuevo[id2].precio);
										venta[id4].ivalib = cantidad*(((libronuevo[id2].precio)/100)*16);
										venta[id4].totaliva = cantidad*(libronuevo[id2].precio+(((libronuevo[id2].precio)/100)*16));
									
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\t\t\tBiblioteca Bisonte.\n\n");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\t\t\tCANTIDAD: %d\n", venta[id4].cantlib);
										printf("\t\t\t\t\t\t\t\tPRECIO %1.2f\n", venta[id4].preclib);
										printf("\t\t\t\t\t\t\t\tIVA %1.2f\n", venta[id4].ivalib);
										printf("\t\t\t\t\t\t\t\tTOTAL: %1.2f\n\n", venta[id4].totaliva);
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
									
									
									for(id=0; id<=aumento-1; id++)
										{
											if((nuevo[id].activado) == 1) //Apareceran los que tienen el estatus activado solamente //
												{
													printf("ID: %d,NOMBRE: %s,CORREO: %s,TELEFONO: %s,DIRECCION: %s, ESTATUS: %d\n", id, nuevo[id].nom, nuevo[id].correo, nuevo[id].tel, nuevo[id].dir, nuevo[id].activado);
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												}
										}
							
									printf("\nIngresa el id que te gustaria seleccionar: "); // Selecciona a los clientes que tengan el id comentado//
									scanf("%d", &id);
									
									conf = 0;
									
									// Se confirmara si se desea realizar la accion mencionada //
									
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
									
									// En caso negativo, se intreducira al while //
									
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
														for(id=0; id<=aumento-1; id++)
															{
																if((nuevo[id].activado) == 1) //Apareceran los que tienen el estatus activado //
																	{
																		printf("ID: %d,NOMBRE: %s,CORREO: %s,TELEFONO: %s,DIRECCION: %s, ESTATUS: %d\n", id, nuevo[id].nom, nuevo[id].correo, nuevo[id].tel, nuevo[id].dir, nuevo[id].activado);
																		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																	}
															}
												
													printf("\nIngresa el id que te gustaria seleccionar: "); // Selecciona al id del cliente que quiere la renta //
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
											
											for(id2=0; id2<=aumento2-1; id2++)
												{
													if((libronuevo[id2].activado2) == 1 && libronuevo[id2].tipo[0] == 'R') // Solo apareceran los libros que puedan rentarse con el estatus 1 //
														{
															printf("ID: %d,TITULO: %s,AUTOR: %s,PRECIO: $%1.2f,F.P: %d,CANTIDAD: %d,EDITORIAL: %s,ESTATUS: %d,TIPO: %c\n", id2, libronuevo[id2].titulo, libronuevo[id2].autor,libronuevo[id2].precio, libronuevo[id2].anio, libronuevo[id2].cantidad,  libronuevo[id2].editorial,libronuevo[id2].activado2,libronuevo[id2].tipo[0]);
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														}
												}
									
											printf("\nIngresa el ISBN que te gustaria seleccionar: "); 
											scanf("%d", &id2);
										
											if ((libronuevo[id2].activado2)==1 && libronuevo[id2].tipo[0] == 'R' &&  libronuevo[id2].cantidad > 0 )
												{
													
													printf("Cuantos te gustaria rentar: ");
													scanf("%d", &cantidad);
													libronuevo[id2].cantidad = libronuevo[id2].cantidad - cantidad;
														
													if(libronuevo[id2].cantidad > 0 )
														{
															printf("\a\n\nConfirmar si lo quieres rentar.\n");
															printf("1)Seguir.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
															scanf("%d", &conf2);
														}
																
												}
												
											else if ((libronuevo[id2].activado2)==0 || libronuevo[id2].tipo[0] == 'V' || libronuevo[id2].cantidad <= 1)
												{
													conf2 = 2;
												}
									
											while(des2 == 1 && conf2 == 2)
												{
													// Si en dado caso no cumple con algunas de las condiciones establecidas, se volvera a sumar la cantidad y comenzara el proceso //
													
													libronuevo[id2].cantidad = libronuevo[id2].cantidad + cantidad;	
													system("cls");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\tSeleccion de Libros.\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													printf("\aEste libro ya no existe o aun no esta registrado, intentalo de nuevo.\n\n");
													printf("1)Seguir eligiendo.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
													scanf("%d", &des2);
											
											switch(des2)
												{
													case 1:	
														system("cls");	
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
														printf("\t\t\t\t\t\tLibros Registrados.\n\n");
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														for(id2=0; id2<=aumento2-1; id2++)
															{
																if((libronuevo[id2].activado2) == 1 && libronuevo[id2].tipo[0] == 'R')
																	{
																		printf("ID: %d,TITULO: %s,AUTOR: %s,PRECIO: $%1.2f,F.P: %d,CANTIDAD: %d,EDITORIAL: %s,ESTATUS: %d, TIPO: %c\n", id2, libronuevo[id2].titulo, libronuevo[id2].autor,libronuevo[id2].precio, libronuevo[id2].anio, libronuevo[id2].cantidad,  libronuevo[id2].editorial,libronuevo[id2].activado2,libronuevo[id2].tipo[0]);
																		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																	}
															}
														printf("\nIngresa el ISBN que te gustaria seleccionar: "); // Selecciona a los libros que tengan el ISBN marcado//
														scanf("%d", &id2);
														
														if ((libronuevo[id2].activado2)==1 && libronuevo[id2].tipo[0] == 'R' &&  libronuevo[id2].cantidad > 0)
															{
																
																printf("Cuantos te gustaria rentar: ");
																scanf("%d", &cantidad);
																libronuevo[id2].cantidad = libronuevo[id2].cantidad - cantidad;
														
																if(libronuevo[id2].cantidad > 0 )
																	{
																		printf("\a\n\nConfirmar si lo quieres rentar.\n");
																		printf("1)Seguir.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
																		scanf("%d", &conf2);
																	}
																	
																	// Si la respuesta es afirmativa, el libro es seleccionado //
																	
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
												rentaleer[id3].lib = id2;
												rentaleer[id3].us = id;
												rentaleer[id3].cant = cantidad;
												rentaleer[id3].tiporl[0] = 'R';
												rentaleer[id3].estatus = 1;
											}		
									
										system("cls");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\tRenta.\n\n");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
											for(id3=0; id3<=aumento3; id3++)
												{
													
													if(rentaleer[id3].tiporl[0] == 'R' && rentaleer[id3].estatus == 1)
														{
															printf("ID: %d,ISBN: %d,RENTO: %d, TIPO: %c, ESTATUS: %d\n", rentaleer[id3].us, rentaleer[id3].lib,rentaleer[id3].cant, rentaleer[id3].tiporl[0],rentaleer[id3].estatus);
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
									printf("\t\t\t\t\t\t\t\t\tLeer en Sala.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									printf("\t\t\t\t\t\t\tClientes Registrados.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
									
									for(id=0; id<=aumento-1; id++)
										{
											if((nuevo[id].activado) == 1) //Apareceran los que tienen el estatus activado solamente //
												{
													printf("ID: %d,NOMBRE: %s,CORREO: %s,TELEFONO: %s,DIRECCION: %s, ESTATUS: %d\n", id, nuevo[id].nom, nuevo[id].correo, nuevo[id].tel, nuevo[id].dir, nuevo[id].activado);
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												}
										}
							
									printf("\nIngresa el id que te gustaria seleccionar: "); // Selecciona a los clientes que tengan el id comentado//
									scanf("%d", &id);
									
									conf = 0;
									
									// Se confirmara si se desea realizar la accion mencionada //
									
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
									
									// En caso negativo, se intreducira al while //
									
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
														for(id=0; id<=aumento-1; id++)
															{
																if((nuevo[id].activado) == 1) //Apareceran los que tienen el estatus activado //
																	{
																		printf("ID: %d,NOMBRE: %s,CORREO: %s,TELEFONO: %s,DIRECCION: %s, ESTATUS: %d\n", id, nuevo[id].nom, nuevo[id].correo, nuevo[id].tel, nuevo[id].dir, nuevo[id].activado);
																		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																	}
															}
												
													printf("\nIngresa el id que te gustaria seleccionar: "); // Selecciona al id del cliente que quiere la renta //
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
											
											for(id2=0; id2<=aumento2-1; id2++)
												{
													if((libronuevo[id2].activado2) == 1 && libronuevo[id2].tipo[0] == 'R' || libronuevo[id2].tipo[0] == 'V')  // Solo apareceran los libros que puedan rentarse con el estatus 1 //
														{
															printf("ID: %d,TITULO: %s,AUTOR: %s,PRECIO: $%1.2f,F.P: %d,CANTIDAD: %d,EDITORIAL: %s,ESTATUS: %d,TIPO: %c\n", id2, libronuevo[id2].titulo, libronuevo[id2].autor,libronuevo[id2].precio, libronuevo[id2].anio, libronuevo[id2].cantidad,  libronuevo[id2].editorial,libronuevo[id2].activado2,libronuevo[id2].tipo[0]);
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														}
												}
									
											printf("\nIngresa el ISBN que te gustaria seleccionar: "); 
											scanf("%d", &id2);
										
											if ((libronuevo[id2].activado2)==1 && libronuevo[id2].tipo[0] == 'R' || libronuevo[id2].tipo[0] == 'V' &&  libronuevo[id2].cantidad > 0 )
												{
													
													printf("Cuantos te gustaria rentar: ");
													scanf("%d", &cantidad);
													libronuevo[id2].cantidad = libronuevo[id2].cantidad - cantidad;
														
													if(libronuevo[id2].cantidad > 0 )
														{
															printf("\a\n\nConfirmar si lo quieres leer en sala.\n");
															printf("1)Seguir.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
															scanf("%d", &conf2);
														}
																
												}
												
											else if ((libronuevo[id2].activado2)==0 || libronuevo[id2].cantidad <= 1)
												{
													conf2 = 2;
												}
									
											while(des2 == 1 && conf2 == 2)
												{
													// Si en dado caso no cumple con algunas de las condiciones establecidas, se volvera a sumar la cantidad y comenzara el proceso //
													
													libronuevo[id2].cantidad = libronuevo[id2].cantidad + cantidad;	
													system("cls");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\tSeleccion de Libros.\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
													printf("\aEste libro ya no existe o aun no esta registrado, intentalo de nuevo.\n\n");
													printf("1)Seguir eligiendo.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
													scanf("%d", &des2);
											
											switch(des2)
												{
													case 1:	
														system("cls");	
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
														printf("\t\t\t\t\t\tLibros Registrados.\n\n");
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														for(id2=0; id2<=aumento2-1; id2++)
															{
																if((libronuevo[id2].activado2) == 1 && libronuevo[id2].tipo[0] == 'R' || libronuevo[id2].tipo[0] == 'V')
																	{
																		printf("ID: %d,TITULO: %s,AUTOR: %s,PRECIO: $%1.2f,F.P: %d,CANTIDAD: %d,EDITORIAL: %s,ESTATUS: %d, TIPO: %c\n", id2, libronuevo[id2].titulo, libronuevo[id2].autor,libronuevo[id2].precio, libronuevo[id2].anio, libronuevo[id2].cantidad,  libronuevo[id2].editorial,libronuevo[id2].activado2,libronuevo[id2].tipo[0]);
																		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																	}
															}
														printf("\nIngresa el ISBN que te gustaria seleccionar: "); // Selecciona a los libros que tengan el ISBN marcado//
														scanf("%d", &id2);
														
														if ((libronuevo[id2].activado2)==1 && libronuevo[id2].tipo[0] == 'R' || libronuevo[id2].tipo[0] == 'V' &&  libronuevo[id2].cantidad > 0)
															{
																
																printf("Cuantos te gustaria rentar: ");
																scanf("%d", &cantidad);
																libronuevo[id2].cantidad = libronuevo[id2].cantidad - cantidad;
														
																if(libronuevo[id2].cantidad > 0 )
																	{
																		printf("\a\n\nConfirmar si lo quieres leer en sala.\n");
																		printf("1)Seguir.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
																		scanf("%d", &conf2);
																	}
																	
																	// Si la respuesta es afirmativa, el libro es seleccionado //
																	
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
												rentaleer[id3].lib = id2;
												rentaleer[id3].us = id;
												rentaleer[id3].cant = cantidad;
												rentaleer[id3].tiporl[0] = 'P';
												rentaleer[id3].estatus = 1;
											}
	
										system("cls");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
										printf("\t\t\t\t\t\tLeer en Sala.\n\n");
										printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
											for(id3=0; id3<=aumento3; id3++)
												{
													if(rentaleer[id3].tiporl[0] == 'P' && rentaleer[id3].estatus == 1)
														{
															printf("ID: %d,ISBN: %d,RENTO: %d, TIPO: %c, ESTATUS: %d\n", rentaleer[id3].us, rentaleer[id3].lib ,rentaleer[id3].cant, rentaleer[id3].tiporl[0], rentaleer[id3].estatus);
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
									for(id3=0; id3<=aumento3-1; id3++)
										{
											if((rentaleer[id3].estatus) == 1)
												{
													printf("LUGAR: %d, ID: %d,ISBN: %d,RENTO: %d, TIPO: %c, ESTATUS:%d\n",id3, rentaleer[id3].us, rentaleer[id3].lib ,rentaleer[id3].cant, rentaleer[id3].tiporl[0],rentaleer[id3].estatus);
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												}
										}
										
									printf("Selecciona el lugar del libro que vas a regresar: ");
									scanf("%d", &id3);
									(rentaleer[id3].estatus)=0;
									libronuevo[rentaleer[id3].lib].cantidad = libronuevo[rentaleer[id3].lib].cantidad + rentaleer[id3].cant;
									
									if(rentaleer[id3].tiporl[0] == 'P')
										{
											system("cls");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\tRegresar Libro.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
											for(id3=0; id3<=aumento3-1; id3++)
												{
													if((rentaleer[id3].estatus) == 1)
														{
															printf("LUGAR: %d, ID: %d,ISBN: %d,RENTO: %d, TIPO: %c, ESTATUS:%d\n",id3, rentaleer[id3].us, rentaleer[id3].lib ,rentaleer[id3].cant, rentaleer[id3].tiporl[0],rentaleer[id3].estatus);
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														}
												}
											
											
											printf("\nACTUALIZACION EXITOSA\nPresiona enter para continuar.");
											fflush(stdin);
											getchar();	
										}
									
									else if(rentaleer[id3].tiporl[0] == 'R')
										{
											system("cls");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\tRegresar Libro.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
											for(id3=0; id3<=aumento3-1; id3++)
												{
													if((rentaleer[id3].estatus)== 1)
														{
															printf("LUGAR: %d, ID: %d,ISBN: %d,RENTO: %d, TIPO: %c, ESTATUS:%d\n",id3, rentaleer[id3].us, rentaleer[id3].lib ,rentaleer[id3].cant, rentaleer[id3].tiporl[0],rentaleer[id3].estatus);
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														}
												}
											printf("\nACTUALIZACION EXITOSA\nPresiona enter para continuar.");
											fflush(stdin);
											getchar();
											
											system("cls");
											
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\t\t\tPago por devolucion de libros.\n\n");
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
											
											// En esta seccion comenzara a seleccionar la cantidad de dias que tardo para devolver el mencionado libro, tras esto, comenzara ejecutar esta seccion los pagos que se deveran de realizar //
											
											printf("Ingresa los dias que tardo para devolverlos: ");
											scanf("%d", &rentaleer[id3].dias);
											system("cls");
											
											if((rentaleer[id3].dias)==1)
												{
													
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\t\t\tBiblioteca Bisonte.\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\t\t\tCANTIDAD: %d\n", (rentaleer[id3].cant));
													printf("\t\t\t\t\t\t\t\tPRECIO: %d\n", 10*rentaleer[id3].cant);
													printf("\t\t\t\t\t\t\t\tTOTAL: %d\n", 10*rentaleer[id3].cant);
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\nPAGO CON EXITO\nPresiona enter para continuar.");
													fflush(stdin);
													getchar();
												}
												
											else if((rentaleer[id3].dias) == 2)
												{
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\t\t\tBiblioteca Bisonte.\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\t\t\tCANTIDAD: %d\n", (rentaleer[id3].cant));
													printf("\t\t\t\t\t\t\t\tPRECIO %d\n", 15*(rentaleer[id3].cant));
													printf("\t\t\t\t\t\t\t\tTOTAL: %d\n", 15*rentaleer[id3].cant);
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\nPAGO CON EXITO\nPresiona enter para continuar.");
													fflush(stdin);
													getchar();
												}
												
											else if((rentaleer[id3].dias) == 3)
												{
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\t\t\tBiblioteca Bisonte.\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\t\t\tCANTIDAD: %d\n", rentaleer[id3].cant);
													printf("\t\t\t\t\t\t\t\tPRECIO %1.2f\n", 20*rentaleer[id3].cant);
													printf("\t\t\t\t\t\t\t\tTOTAL: %1.2f\n\n", 20*rentaleer[id3].cant);
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\nPAGO CON EXITO\nPresiona enter para continuar.");
													fflush(stdin);
													getchar();
												}
												
											else if((rentaleer[id3].dias) > 3)
												{
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\t\t\tBiblioteca Bisonte.\n\n");
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\t\t\t\t\t\t\t\tCANTIDAD: %d\n", (rentaleer[id3].cant));
													printf("\t\t\t\t\t\t\t\tPRECIO %1.2f\n", 20*(rentaleer[id3].cant)+((rentaleer[id3].dias)*3));
													printf("\t\t\t\t\t\t\t\tTOTAL: %1.2f\n\n", 20*(rentaleer[id3].cant)+((rentaleer[id3].dias)*3));
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
													printf("\nPAGO CON EXITO\nPresiona enter para continuar.");
													fflush(stdin);
													getchar();
												}
										}

								break;
								
								default :
									
								break;
								
							}
				break;
						
				case 4: 		
						system("cls");
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
						printf("\t\t\t\t\t\t\t\t\tClientes.\n\n");
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");	
						printf("1)Consulta por Cliente.\n2)Consulta por Libro.\n3)Consulta de Movimientos de Libros.\n4)Regresar al menu principal\n\nIngresa tu opcion: ");
						scanf("%d", &consulta);
						
						switch(consulta)
							{
								case 1: 	
									system("cls");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
									printf("\t\t\t\t\t\t\tClientes Registrados.\n\n");
									printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
									
									for(id=0; id<=aumento-1; id++)
										{
											if((nuevo[id].activado) == 1) //Apareceran los que tienen el estatus activado y apagado //
												{
													printf("ID: %d,NOMBRE: %s,CORREO: %s,TELEFONO: %s,DIRECCION: %s, ESTATUS: %d\n", id, nuevo[id].nom, nuevo[id].correo, nuevo[id].tel, nuevo[id].dir, nuevo[id].activado);
													printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
												}
										}
							
									printf("\nIngresa el id que te gustaria consultar: "); // Elimina a los clientes que tengan el id comentado//
									scanf("%d", &id);
									
									// Te pedira una confirmacion para la eliminacion de dichos clientes //
									
									if ((nuevo[id].activado)==1)
										{
											printf("\a\n\nConfirmar si lo quieres consultar.\n");
											printf("1)Seguir con la consulta.\n2)Ir a un submenu.\nIntroduce tu seleccion: ");
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
											printf("\t\t\t\t\t\t\tConsulta de Clientes.\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
										
											// Si en dado caso, el dato que ingreso para eliminar al cliente aun no existe o ya fue eliminado ingresara a este menu //
											
											printf("\aElige otro cliente o ingresa lo que te gustaria hacer.\n");
											printf("1)Seguir eligiendo.\n2)Regresar al menu principal.\nIntroduce tu seleccion: ");
											scanf("%d", &des);
											
											// Dependera de la desicion que tome el usuario es lo que hara el programa, saldra o entrara a volver a elegir otro cliente //
											
											switch(des)
												{
													case 1:
														system("cls");
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
														printf("\t\t\t\t\t\t\tClientes Registrados.\n\n");
														printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														
														// Si desea seguir eligiendo volvera a repetir el proceso pasado en un bucle //
														
														for(id=0; id<=aumento-1; id++)
															{
																if((nuevo[id].activado) == 1) //Apareceran los que tienen el estatus activado y apagado //
																	{
																		printf("ID: %d,NOMBRE: %s,CORREO: %s,TELEFONO: %s,DIRECCION: %s, ESTATUS: %d\n", id, nuevo[id].nom, nuevo[id].correo, nuevo[id].tel, nuevo[id].dir, nuevo[id].activado);
																		printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
																	}
															}
												
													printf("\nIngresa el id que te gustaria borrar: "); // Elimina a los clientes que tengan el id comentado//
													scanf("%d", &id);
													
													if ((nuevo[id].activado)==1)
														{
															printf("\a\n\nConfirmar si lo quieres consultar.\n");
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
											printf("\t\t\t\t\t\t\tConsulta de Clientes\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
											printf("ID: %d", id);
											printf("Nombre %s", nuevo[id].nom);
											printf("Correo %s", nuevo[id].correo);
											printf("Direccion %s", nuevo[id].dir);
											printf("Telefono %s", nuevo[id].tel);
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
											printf("\t\t\t\t\t\t\tLibros en Renta\n\n");
											printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
											
											
											for(id3=0; id3<=aumento; id3++)
												{
													
													if(rentaleer[id3].us == id)
														{
															printf("ISBN: %d,TITULO: %s,AUTOR:%s,FECHA DE RENTA: ,NUMERO DE DIAS: %d\n", rentaleer[id3].lib ,libronuevo[rentaleer[id3].lib].titulo, libronuevo[rentaleer[id3].lib].autor,rentaleer[id3].dias);
															printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
														}
												}
												
											printf("\nCONSULTA CON EXITO\nPresiona enter para continuar.");
											fflush(stdin);
											getchar();
											des = 1;
											conf = 0;
										}
									
									// Si en dado caso no elimino a nadie, los valores seran estos y volveremos al principio del programa // 
									else if(des == 2 && conf == 2)
										{
											system("cls");
											conf = 0;
											des = 1;
										}
									
								break;
								
								
							}
							
							
							
							
							
					break;	
						
						
						
						
						
						
				case 5: // Salida del programa //
						if(usuario==1897962)
					{
						system("cls");
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
						printf("Adios Juan Manuel Martinez Ramirez.\t\t\t\t\t\t\t%s", ctime(&tiempo));
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					}
					
						if(usuario==1842829)
					{
						system("cls");
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
						printf("Adios Ana Lizbeth Dominguez Garza.\t\t\t\t\t\t\t        %s", ctime(&tiempo));
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					}
					
						if(usuario==1941436)
					{
						system("cls");
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
						printf("Adios Angel Ledezma Zavala.\t\t\t\t\t\t\t\t%s", ctime(&tiempo));
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
					}
					
						if(usuario==1907995)
					{
						system("cls");
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
						printf("Adios Luis Armando Villanueva Garcia.\t\t\t\t\t\t\t        %s", ctime(&tiempo));
						printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
						
					}	
				break;
				
				default: intentos = intentos+1; // Si despues de 3 intentos no seleccionas uno de los numeros correctos, automaticamente el programa finaliza //
							if(intentos==3)
							{
								system("cls");
								printf("\t\t\t\t\t\t\aSE CIERRA SESION.\n\n");
								return 0;
							}
			}
		}while(opcion != 5);
		
		fclose(flujo);
	
	return 0;
}


