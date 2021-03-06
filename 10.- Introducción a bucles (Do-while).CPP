//Ciclos-Bucles o loops

//Estructura de control iterativa controlada por eventos: do-while �
//Estructura de control postcondicional controlada por eventos: do-while


#include <stdio.h>                                          //Libreria para "printf()" y "scanf()"
#include <conio.h>                                          //Libreria para "getch()"

void main()                                                 
{                                                           //Inicia programa
 int num;                                                   //Se instanc�a variable "num" del tipo entero(int)

 do                                                         //Introduce al bucle de manera autom�tica
  {                                                         //Inicia ejecuci�n de este bloque de instrucciones
   printf("Se ha ingresado al bucle: \n");                  //Imprime notificaci�n de entrada al bucle
   printf("por lo menos en esta ocasion. \n\n");            //Se ejecutar� por lo menos una vez
   printf("Para salir teclee un numero mayor a 5: ");     //Imprime petici�n de un n�mero mayor a 5

   scanf("%i", &num);                                       //Extrae un valor y lo almacena en "num" (determina la iteraci�n)
  }while(num < 5);                                          //Condici�n: si el valor de "num" es menor que 5: regresa la l�nea de "do"

  printf("Estas fuera del bucle");                          //Imprime notificaci�n de salida del bucle

  getch();                                                  //Espera respuesta por teclado
}                                                           //Fin del programa

/*
 Se dice que un bucle es postcondicional porque primero ejecuta un bloque de instrucciones contenido en
 su cuerpo y despu�s evalua una condici�n para ejecutarlas de nuevo o no.

 Estructura de control iterativa controlada por eventos: "do-while"
 Ejecuta una sentencia o bloque de instrucciones y luego evalua una condici�n para volver a ejecutarlos.


 do
 {
   Sentancia 1;
   Sentencia 2;
   Sentencia n;
   Asignaci�n e iteraci�n;
 }while(Condici�n);


 do: Ejecuta todas las instrucciones precedidas de este identificador hasta llegar a la condici�n.
 Condici�n: Expresi�n l�gica para determinar si es verdadero o falso.
            Si es verdadero: Ejecuta nuevamente el bloque de instrucciones.
            Si es falso: No ejecuta el bloque de instrucciones y contin�a con el flujo de instrucciones del programa.

 Asignaci�n e iteraci�n: Controla el n�mero de veces que se ejecutar� nuevamente el bloque y posteriormente evaluar en "while(Concici�n);".

 Para que se ejecute de nuevo el bloque de instrucciones la condici�n tiene que ser verdadera.

 NOTA: La diferencia entre "while" y "do-while" es que, "do-while" ejecutar� las instrucciones por lo menos una vez y luego evalua una
       condici�n para volverlas a ejecutar; a diferencia de "while" que, primero evalua una condici�n y luego ejecuta o no las instrucciones.

      while : Evalua una condici�n y luego ejecuta instrucciones.
      do-while: Ejecuta las intrucciones y luego evalua condici�n. 
*/

