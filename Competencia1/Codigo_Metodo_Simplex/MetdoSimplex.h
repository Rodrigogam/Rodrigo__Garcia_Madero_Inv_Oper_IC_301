/**
*@file   MetdoSimplex.h
*@brief llamadas de las funciones.
*/
#ifndef __MetdoSimplex_h
#define __MetdoSimplex_h
#include <stdio.h>
#define TAM 50
 
/**
*@brief     Inserta 0 en toda la matriz.
*\details   Al ejecutarse llenara toda a matriz de 0.
*@param     m       Variable para la matriz.
*@param     f       Variable para el n�mero de filas.
*@param     c       Variable para el n�mero de columnas.
*\return    void.
*/ 
void insertar0(float m[][TAM],int f, int c);
/**
*@brief     Imprime la cadena de dos dimesiones.
*\details   Al ejecutarse imprime la matriz en formato de tabla.
*@param     m       Variable para la matriz.
*@param     f       Variable para el n�mero de filas.
*@param     c       Variable para el n�mero de columnas.
*\return    void.
*/
void imprimir(float m[][TAM],int f, int c);
/**
*@brief     Pide al usuario los datos de la funci�n.
*\details   Al ejecutarse va a guardar los valores de la funcion en las variables "zx1" y "zx2".
*@param     m       Variable para la matriz.
*@param     f       Variable para el n�mero de filas.
*\return    void.
*/
void introducir_funcion(float m[][TAM],int f);
/**
*@brief     Pide al usuario los valores de las restricciones.
*\details   Esta seccion contiene un for ya que se repetira segun elnumero de funciones de
 restriccion que el usuario introdujo.
*\details   Los datos de las funciones de restricc�n se iran guardando en la matriz.
*@param     m       Variable para la matriz.
*@param     c       Variable para el n�mero de columnas.
*@param     r       Variable para la cantidad de restricciones.
*\return    void.
*/
void introducir_restriccion(float m[][TAM],int c,int r);
/**
*@brief     Busca cu�l es la columna que tenga el dato de menor valor, esto para sacar el pivote.
*\details   El valor que se devuelva se usara para la funci�n menorF.
*@param     m       Variable para la matriz.
*@param     f       Variable para el n�mero de filas.
*@param     c       Variable para el n�mero de columnas.
*\return    Regresa "noColumna" que es una variable de tipo entero la cual contiene el n�mero de la columna con el dato menor.
*/
int menorC(float m[][TAM],int f,int c);
/**
*@brief     Busca cu�l es la fila que tenga el dato de menor valor, esto para sacar el pivote.
*\details   Dentro de la funcion se hara una divisi�n de columnas se dividir� la columna actual entre los valores de la columna pivote.
*\details   Los valores que resulten de la divisi�n ser�n guardados en una matriz auxiliar, posteriormente se buscara cual es dato de menor valor.
*@param     m           Variable para la matriz.
*@param     f           Variable para el n�mero de filas.
*@param     c           Variable para el n�mero de columnas.
*@param     noColumna   Variable para almacenar el n�mero de la columna con el valor menor.
*\return    Regresa "noFila" que es una variable de tipo entero la cual contiene el n�mero de la fila con el dato menor.
*/
int menorF(float m[][TAM],int f,int c,int noColumna);
/**
*@brief     Divide todos los tados de la fila de menor valor entre el n�mero pivote.
*\details   La fila con el menor valor es la fila obtenida de noFila().
*@param     m       Variable para la matriz.
*@param     c       Variable para el n�mero de columnas.
*@param     noFila  Variable para almacenar el n�mero de la fila con el valor menor.
*@param     piv     Variable para almacenar el n�mero pivote.
*\return    void.
*/
void dividirentreP(float m[][TAM],int c, int noFila,int piv);
/**
*@brief     Remplaza los valores de lla tabla para obtener el resultado final.
*\details   Remplaza los valores de todas las filas excepto el de la fila con menor valor, para eso al variable noFila.
*@param     m       Variable para la matriz.
*@param     noFila  Variable para almacenar el n�mero de la fila con el valor menor.
*@param     noColumna   Variable para almacenar el n�mero de la columna con el valor menor.
*@param     c       Variable para el n�mero de columnas.
*@param     f           Variable para el n�mero de filas.
*\return    void.
*/
void filanueva(float m[][TAM],int noFila,int noColumna,int c,int f);


#endif

