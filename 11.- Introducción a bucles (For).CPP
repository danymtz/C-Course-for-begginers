//Ciclos-Bucles o Loops

//Estructura de control iterativa precondicional: for

#include <stdio.h>                                         //Libreria para "printf()"
#include <conio.h>                                         //Libreria para "getch()"

void main()
{                                                          //Inicia la ejecuci�n del programa
                                                           
 for(int i=0; i<6; i=i+1)                                  //Inicia bucle for. Contiene 3 instrucciones: Inicio, Condici�n e iteraci�n
 {                                                         //Evalua condici�n.
  printf("Esta linea se imprime 6 veces\n");               //Imprime cadena en pantalla
  printf("Esta linea tambien.\n\n");                       //Imprime cadena en pantalla
 }                                                         //1.Realiza la iteraci�n 2.Regresa a la l�nea de "for()" 3.Prueba la condici�n  

 getch();
}                                                          //Fin del rpograma

/*
 Estructura de control iterativa precondicional: "for"
 Ejecuta una sentencia o bloque de instrucciones de manera repetida siempre que una condici�n sea verdadera.

 for (Inicializaci�n; Condici�n; Iteraci�n)
 {
  Sentencia 1;
  Sentencia 2;
  Sentencia n;
 }

 Partes que conforman un ciclo "for".

 Las instrucciones para este bucle se preestablecen en una l�nea y funcionan en �ste orden:

 1. Inicializaci�n: S�lo ocurre una vez, y es antes de ingresar al bucle (Asigna un valor inicial).
 2. Condici�n: Eval�a un "valor" y determina si es verdadero o falso; si es verdadero ejecuta el 
               grupo de instrucciones.
 3. Iteraci�n: Asigna un nuevo valor de incremento o decremento al valor anterior.
 4. Finalmente, eval�a la condici�n para ejecutar o no nuevamente el bloque de instrucciones y 
    nuevamente itera, as� sucesivamente.
 
 A diferencia de while, este loop(bucle) ya tiene predeterminado el n�mero de veces que se repetir� 
 antes de ingresar a este mismo, mientras que while lo determina durante su ejecuci�n.

 NOTA: Si for incluye una sola sentencia(l�nea) en su segmento, se puede omitir el uso de 
       llaves "{}", aplica igual para ciclo "while" y "do-while".

 Ejm:

 for (Inicializaci�n; Condici�n; Iteraci�n)
    Sentencia 1;
 

*/