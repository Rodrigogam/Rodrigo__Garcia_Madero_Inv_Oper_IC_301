/**
*@file      main.c
*@author    Rodrigo Garcia Madero.
*@date      14-01-2021 codigo.
*@date      15-01-2021 Documentacion.
*
*@brief     Seccion principal del código.
*\
*
*\
*
*@param     m        Guarda el dato "m" de la funcion.
*@param     b        Guarda el dato "r" de la funcion.
*@param     r1       Para alojar el rango inferior o izquierdo. 
*@param     r2       Para alojar el rango superior o derecho.
*@param     tiempo   Permite al usuario elegir cuanto tiempo puede ver la grafica.
*
*@todo      Mejorar el aspecto de la tabla generada por el programa
*
*/
#include <stdio.h>
#include <stdlib.h>
#include "Grafica.h"

int main() {
	// Variables 
	int m,b,r1,r2,tiempo;

	printf("\t\t\t _____________________________\n");
	printf("\t\t\t| Grafica una funcion lineal:|\n");
	printf("\t\t\t|           y=mx+b           |\n");	
	printf("\t\t\t|____________________________|\n");
    
    
    	// Ingresar los datos de la funciones 
   	printf("\n--------------------------------------------\n");
    printf("  -->Ingresa el valor|M|<--\n");
    printf("R= ");
	scanf("%d", &m);
	printf("\n--------------------------------------------\n");
	printf("  -->Ingresa el valor|B|<--\n");
    printf("R= ");
	scanf("%d", &b);
	printf("\n--------------------------------------------\n");
	printf("  -->Ingrese rango inicial en eje |x|<--\n");
	printf("R= ");
	scanf("%d", &r1);
	printf("--------------------------------------------\n");
	printf("  -->Ingrese rango fianal en eje |x|<--\n");
	printf("R= ");
	scanf("%d", &r2);
	printf("\n---------------------------------------------------------------------------\n");
   	printf("--->Ingrese el numero |10| para que te genere visualizacion del grafico<---\n");
	printf("R= ");
	scanf("%d", &tiempo);
	printf("---------------------------------------------------------------------------\n");
	tablaC(r1,r2,m,b);
	graficar(r1,r2,m,b,tiempo);
	return 0;
}

