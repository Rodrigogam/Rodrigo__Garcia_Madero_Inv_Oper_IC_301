/**
*@file   main.c
*@brief  Secci�n principal.
*@author Rodrigo Garcia Madero.
*@date   13-01-2021 C�digo.
*@date   14-01-2021 Documentaci�n.
*@todo   Mejorar la secci�n principal del c�digo. 
*
*@param     nodos       Guarda el n�mero de nodos del grafo.
*@param     adya        Guarda el n�mero de adyacencias del grafo.
*@param     filcol      Se puede omitir el uso de esta variable ya que el contenido es igual a la variable nodos, se usa para evitar confusiones. 
*@param     a           Para alojar el punto "A" de la ruta.
*@param     b           Para alojar el punto "B" de la ruta.
*@param     matriz      �rea para representar el grafo en forma de tabla matriz principal.
*@param     grafo       Matriz auxiliar para el uso de recursividad      matriz secundaria.
*@param     aux         Variable auxiliar para la funci�n recursiva.
*@param     r           Se guarda el resultado de la funcion de recursividad.
*@param     r2          Sirve para el uso de una estructura de repetici�n.
*/
#include <stdio.h>
#include <stdlib.h>
#include "Grafos.h"
int main(){
	// Varibles		
	int a,b,filcol,nodos,adya,r,r2=0,aux=0;
    int matriz [TAM][TAM]; 
    int grafo [TAM][2];
	
	printf("\t\t\t ______________\n");
	printf("\t\t\t|     Grafos   |\n");	
	printf("\t\t\t|______________|\n");
	
	printf("----------------------------------------\n");
	printf("Ingrese el numero de nodos: ");
	scanf("%d", &nodos);
	printf("----------------------------------------\n");
	filcol=nodos;
	imprimir(matriz,filcol);
	insertar0(matriz,filcol);	//rellenar 0
	printf("------------------------------------------------------\n");
	printf("Cuantas adyacencias hay: ");
	scanf("%d", &adya);
	printf("------------------------------------------------------\n");
	introducir_adya(grafo,matriz,adya); 
	imprimir(matriz,filcol);   
	  
	while(r2==0){//inicio while 
	printf("------------------------------------------------------\n");
	printf("\nQue ruta quieres  buscar\n");
	printf("Punto |A|: ");
	scanf("%d", &a);
	printf("Punto |B|: ");
	scanf("%d", &b);
	printf("\n------------------------------------------------------\n");

	r=buscar(grafo,matriz,a,b,filcol,aux);
	if (r==1){
		printf("\n Nota: Si existe una ruta :)");
		printf("\n------------------------------------------------------\n");
	}
	else {
		printf("\nota: No existe una ruta :( ");
	}
	
	}	//fin while 
return 0;
}

