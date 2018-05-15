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
  unsigned id_n;
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
  //variable de tipo registro  
  numComplejo numeros[NUM_MAX];	// declaramos la variable numero1
//  struct numComplejo numerob; // declaramos la variable numero


  iniarACero (numeros);
  printf ("\nNumeroa = %f + %fi\n\n", numeros[1].p_real,
	  numeros[1].p_imaginaria);


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
  pt->p_real = 0.0;
  pt->p_imaginaria = 0.0;
  return;

}
