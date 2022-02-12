#include "iostream"  // Biblioteca estandar que permite entradas y salidas 
#include "string"	// * TEXTO */

// christian aldana 0909-21-697

using namespace std; //Creacion de un bloque.

int main()

{
	
	float Dig1, Dig2; //Declarar variable en decimal.
	int opc; //Declarar en num enteros.


cout << "Bienvenido" << "\n";  //Bienvenida
cout << "A continuacion se le pedira que escoga una funcion para poder ejecutar el programa" << "\n"; //   ->  \n = salto de linea 


	printf ("*******************************\n"); //Cuadro de la calculadora.
	printf ("         					  	\n");
	printf ("        1)- Suma. 		  		\n"); //EL usuario podra escoger entre estas opc.
	printf ("        2)- Resta.		  		\n");
	printf ("        3)- Multiplicacion.	\n");
	printf ("        4)- Division.			\n");
	printf ("        5)- Salir              \n");
	printf ("*******************************\n");
	
	printf ( "Porfavor eliga una operacion de la calculadora \n");
	cin >> ( opc); //Leer variable
	
	switch (opc) //Switch (seleccionar operacion aritmetica)
	{

	case 1: //Opc 1
	
		printf ("Ingrese el primer digito:"); //1er digito del usuario.
		cin >> (Dig1); //leer digito.
		printf("Ingrese el segundo digito: ");
		cin >> (Dig2);
	
 cout << Dig1 << " + " << Dig2 << " = " << Dig1 + Dig2;    // se muestran los valores y se realiza la operación mostrados en pantalla
	break; //Finaliza el programa.

		case 2: //OPC 2
		
		printf ("Ingrese el primer digito:"); //1er digito.
		cin >> (Dig2); //Leer 1er dig.
		printf("Ingrese el segundo digito: ");
		cin >> (Dig2);

 cout << Dig1 << " - " << Dig2 << " = " << Dig1 - Dig2;    // se muestran los valores y se realiza la operación mostrados en pantalla en pantalla
break; //Finaliza el programa.

		case 3: //Opc3
		
	
		printf ("Ingrese el primer digito:"); //1er digito.
		cin >> (Dig1); //Leer 1er dig.
		printf("Ingrese el segundo digito: ");
		cin >> (Dig2);

 cout << Dig1 << " * " << Dig2 << " = " << Dig1 * Dig2;    // se muestran los valores y se realiza la operación mostrados en pantalla
break; //Finaliza el programa.
	
		case 4: //OPC 4
		
			
		printf ("Ingrese el primer digito:"); // ing 1er dig.
		cin >> (Dig1); //Leer 1er dig.
		printf("Ingrese el segundo digito: ");
		cin >> (Dig2);
		

 cout << Dig1 << " / " << Dig2 << " = " << Dig1 / Dig2;    // se muestran los valores y se realiza la operación mostrados en pantalla
break; //Finaliza el programa.



		case 5: //Opc 5
		printf ("Usted salio de la calculadora!"); //Sale automatic del programa.

		break; //Out program.
		


	default: //Si selecciona alguna opc que no es.
		
		printf ("No ha seleccionado una opcion correcta"); 
		break;

	}
	printf ("\n\n"); //Saltos de linea.
	

}




