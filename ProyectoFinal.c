#include<stdio.h>
#include<conio.h>


	struct codigoproducto { /*La estructura que se utilizará 
	para las variables que se ingresarán en la opción 
	del inventario */
		
		char nombre [20];
		int codigo; 
		float precio; 
		int cantidad; 
		
	}
	
	codigoproducto [50]; 
	
	    //Aquí se hace una estructura vacía para que se pueda repetir el menú
		int menu(void){
		 	int feli=3,ae= 130, au= 163, aa= 160, ao= 162, ai= 161, sig= 168; 
		 	
			 // Bienvenida 
			printf("\n\n\t\t\t Bienvenido a mi tiendita %c\n\n", feli);
			
			//Declaración del menú 
			
				 printf("\t\t\t\t\tMen%c\n\n", au);
				 printf("\tElegir la opci%cn deseada\n", ao);
				 printf("\n\n\ta) Crear inventario\n");
				 printf("\n\n\tb) Ver inventario\n");
				 printf("\n\n\tc) Hacer una venta\n");
				 printf("\n\n\td) Salir\n");
				 
		}
	
	//Ahora sí, se agrega la función inicial. 

	int main ()
	{
		//Variables acentos y otras variables que se van a utilizar: 
	 	int ae= 130, au= 163, aa= 160, ao= 162, ai= 161, sig= 168; //Para acentos y signos
		float pp;
		int ca, i, max;  // Para las variables 
		char os = 'n'; 
		double sum = 0, prec = 0; //Para la suma
		int veces = 0; //Para las iteraciones
		char op = '\0'; //La opción del menú

		//Llamo al menú 
		
	do{
		
		menu(); 
		
		fflush (stdin); //Limpio las opcines
		scanf("%c",&op);

				//Opciones del menú	 
			 
		 switch(op)
		 {
			 default: 
			 printf("Opci%cn no v%clida\n",ao,aa);
			 break;
			 
			 case 'a':
			 	//Se limpia la pantalla
			 system ("cls"); 
			 
			 printf("Se seleccion%c 'Crear inventario'\n",ao);
			 
			 printf("\tDigite la cantidad de productos\t\t");
				 scanf("%i",&ca);
			 
			 //Operaciones en las que se pueden ingresar variables
			 
			 for (i=1; i<ca; i++)
			 {
			 	fflush (stdin);
				 
				 printf("\tIngrese el c%cdigo del producto [%d]:\n",ao,i);
				 	scanf("%d",&codigoproducto[i].codigo);
			 		
				 printf("\tIngrese el nombre del producto [%d]:\n",i);
				 	scanf("%s", &codigoproducto[i].nombre );
				 	
				 printf("\tIngrese el precio del producto [%d]:\n", i);
				 	scanf("%f",&codigoproducto[i].precio);
				 	
				 printf("\tIngrese la cantidad que deseas agregar al inventario del producto [%d]:\n", i);
				 	scanf("%i",&codigoproducto[i].cantidad);	
				 	
			}
			for (i=1; i<ca; i++ )
			{
				
				//Imprimir datos
				printf("\nProducto[%i] \nNombre: %s  \nCodigo: %d  \nCantidad: %d  \nPrecio %f ",i, codigoproducto[i].nombre, codigoproducto[i].codigo,codigoproducto[i].cantidad, codigoproducto[i].precio);
				printf("\n\nSe registr%c correctamente",ao); 
			}
			 	
				break; 
							
			 
			 
			 case 'b':
			 	//Se limpia la pantalla
			 system ("cls");
			 	 	
			 	//Confirmación de la opción
			 	printf("\tSe seleccion%c 'Ver inventario'.\n", ao);
			 	
			 	//Se muestra el invetario
			 	for (i=1; i<ca; i++){
			 	  
			 	 printf("\tProducto [%d]:%d\n",i, codigoproducto[i].codigo);
				 
				 printf("\tNombre del producto [%d]:%s\n",i,codigoproducto[i].nombre);
				 
				 printf("\tPrecio del producto [%d]:%f\n", i,codigoproducto[i].precio );
				 	
				 printf("\tCantidad del producto [%d]:%d\n", i, codigoproducto[i].cantidad);
				 
			 	}
			 
			 break;
			 
			  case 'c':
			  	//Se limpia la pantalla
			 system ("cls");
			 	
			 printf("\tSe seleccion%c 'Hacer una venta'.\n", ao);
			 
			 //Es una calculadora (suma)
			 	 
						 do
				 {
				 	
				 	printf("\tSuma el precio de los productos\n");
				 	printf("Ingrese el precio de los productos:\n", ao);
				 	scanf("%lf", &prec);
				 	veces++;
				 	sum = sum + prec;
				 	printf("%cDesea sumar otro? S/N\n", sig);
				 	setbuf(stdin, NULL); 
							// Se limpia el buffer del teclado
				 	scanf("%c",&os);
				 	getchar();
				 	
				 }
				 
				 while (os == 'S' || os == 's'); //Termina bucle
				 
				 //Se agrega el total de la venta
				 printf("\nEl total de la venta es: %lf\n", sum);
				  printf("\nGracias por t%c compra", au);
			 
			 break;
			 
			 
			 case 'd':
			 	//Se limpia la pantalla
			 system ("cls");
			
			 printf("\tSe seleccion%c 'Salir', gracias por usar mi programa, ten un lindo d%ca\n", ao,ai);
			 break;
		 }
		
		//Termina el programa y cierra
	 } while (op!='d'); 
	 
	 
		
		return 0 ;
	}
