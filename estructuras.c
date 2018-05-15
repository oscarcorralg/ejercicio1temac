/******************************************************************************
*@file : estructuras
*Sipnosis programa para resolver el ejercicio 1
*Descripcion de la ejecucion del programa
*Directivas del compilador
*Lista de codigos de salida de la aplicacion
*Dependencias funcionales
*Lista de situaciones criticas
*Organización Universidad del Burgos
*@autor/es: Oscar Corral Garcia
*Fecha: 15/05/2018
*@version: v 0.1 + iniarACero
*Lista de versiones:v 0.1 version inicial 
*Referencia a fuentes consultadas
*Información de copyright del programa*
*
******************************************************************************/

/**************************************
*Directiva del prepocesador
**************************************/
#include<stdio.h>
#include<string.h>

//Definicion de constantes

#define NUM_MAX 10
//Declaracion de variables


typedef struct
{
// se quita id_n por que no sirve de nada la idea era poner de identificador pero
// creo que estaba equivocado ya que al declarar numeros con NUM_MAX 10 podemos 
// almacenar 11 registros ¿ esto es asi verdad?
  //unsigned id_n;
  float p_real;
  float p_imaginaria;
  float modulo;
} numComplejo;



/**************************************
*Declaracion de funciones (prototipos)
**************************************/

void iniarACero (numComplejo * pt);	// inicia a( 0,0) los numeros




/**************************************
*Definicion del modulo principal
**************************************/

int
main ()
{
// variables 
  int i;			// contador ciclo for
  //variable de tipo registro  
  numComplejo numeros[NUM_MAX];	// declaramos la variable numero1
//  struct numComplejo numerob; // declaramos la variable numero


  iniarACero (numeros);
  // Comprobacion del registro 
  for (i = 0; i < NUM_MAX; i++)
    {
      printf ("\nNumero[%d] = %.2f + %.2fi\n", i, numeros[i].p_real,
	      numeros[i].p_imaginaria);
    }
  return 0;
}




/**************************************
*Definicion de otros modulos
**************************************/

/*iniarACero
* Sipnosis: funcion que inicia un numero complejo (a,b) a (0,0)
*@param complejo *pt E/ dirección de una variable struct complejos
*@return nada
*/

void
iniarACero (numComplejo * pt)
{
  int i;
  for (i = 0; i < NUM_MAX; i++)
    {
      pt[i].p_real = 0.0;
      pt[i].p_imaginaria = 0.0;
    }
  return;
}
