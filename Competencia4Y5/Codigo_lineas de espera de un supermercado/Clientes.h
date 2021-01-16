/**
*@file   Clientes.h
*@brief  Clase para pedir todas las funciones .
*/
#ifndef __Clientes_h
#define __Clientes_h
#define TAM 24
#include <stdio.h>
/**
*@brief     Imprime la matriz.
*\details   Al ejecutarse imprimira fila por fila .
*@param     Horas     Guarda elnúmero de horarios que hay por lo que se utiliza en el ciclo "for".
*@param     matriz    En esa matriz estan guardados los datos que el usuario introdujo y los que se añadieron con los calculos.
*\return    void.
*/
void imprimir(int Horas, int matriz[7][TAM]);
/**
*@brief     Va solicita el usuario los datos de hora de inicio-fin, el número de cajas y el número de clientes en espera.
*\details   Contiene un for ya que se repetira segun elnumero de horarios que introdujo el usuario.
*@param     Horas          Guardado el número de horarios que hay por lo que se utiliza como un rango en el cliclo "for".
*@param     hMatriz        Es un matriz se va  guardando los datos de la hora de inicio y fin.
*@param     matriz         En esta matriz se guardaran los datos de los clientes y el numero de cajas.
*\return    void.
*/
void llenadoDatos(int Horas, int hMatriz[][2],int matriz[7][TAM]);
/**
*@brief     Se va arealiza el calculo correspondiente a la capcidad de salida.
*\details   Al ejecutarse llenara la sección matriz.
*@param     Rango      Se va guardado el número de horarios que hay por lo que se utiliza.
*@param     capaciad   Esta variable se guarda cual es la capacidad de atender clientes.
*@param     matriz     Esta matriz se realizarn los calculos para la capcidad de salida con los valores.
*\return    void.
*/
void capacidadSalida(int Rango, int capaciad, int matriz[7][TAM]);
/**
*@brief     Se realiza el calculo correspondiente a la salida de clientes y a la cola de espera.
*\details   Al ejecutarse llenara la matriz.
*@param     Rango      Tiene guardado el número de horarios que hay por lo que se utiliza como un rango en ciclo "for".
*@param     matriz     Se utilizan los datos de la matriz para obtener nuevos datos e irlos guardando.
*\return    void.
*/
void salidaClientes(int Rango, int matriz[7][TAM]);
/**
*@brief     Se va  realiza el calculo correspondiente para Input.
*\details   Al ejecutarse llenara la sección matriz.
*@param     Rango      Guardado el número de horarios que hay por lo que se utiliza como un rango en los cliclos "if" y "for".
*@param     matriz     Los datos de la matriz para obtener nuevos datos e irlos guardando.
*\return    void.
*/
void input(int Rango, int matriz[7][TAM]);
/**
*@brief     Se va realiza el calculo correspondiente para Output.
*\details   Al ejecutarse llenara la sección matriz.
*@param     Rango      Guardado el número de horarios que hay por lo que se utiliza como un rango en los cliclos "if" y "for".
*@param     matriz     Se utilizan los datos de la matriz para obtener nuevos datos e irlos guardando.
*\return    void.
*/
void output(int Rango, int matriz[7][TAM]);
/**
*@brief     Los datos obtenidos de Input y Output se realiza una opción donde te va indicar la capasidad de cada horario.
*\details   Al ejecutarse va ser  calculo que va determinar cuantas cajas se necesitan para atender a todos los clientes que faltaron.
*@param     Rango      Se va guardado el número de horarios que hay por lo que se utiliza como un rango en los cliclos "if" y "for".
*@param     matriz     Es una matriz es utilizada para determinar si se necesitan caajs extra.
*@param     capaciad   En esta variable se guarda cual es la capacidad de atender clientes.
*\return    void.
*/
void recomendacion(int Rango, int matriz[7][TAM],int capaciad);

#endif

