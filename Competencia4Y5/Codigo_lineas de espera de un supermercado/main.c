/**
*@file      main.c 
*@brief     Ejecución de programa .
*@author    Rodrigo Garcia Madero.
*@date     Fecha de entrega 23-12-2020
*/
#include <stdio.h>
#include <stdlib.h>
#include "Clientes.h"

int main(int argc, char *argv[]) {
	int Horarios, capacidad,i;
/*
*@param     Horarios         Establecer cuantos horarios hay. 
*@param     capacidad        Capacidad de atender clientes.
*@param     i                Un auxiliar para estructura "for".
*/
	
	printf("\t\t ____________________________\n");
	printf("\t\t|Gestion de colas de espera  |\n");
	printf("\t\t|____________________________|");
	printf("\nCuantas horas va abrir el supermercado : ");
	scanf("%d", &Horarios);
/*	
*@param     mHoras         Es una matriz que aguarda la hora de inicio y la hora final.
*@param     tablaClientes    Es una matriz se guardaran los datos que el usuario introduzca.
*/
	int mHoras [Horarios][2], tablaClientes [7][Horarios];

	llenadoDatos(Horarios,mHoras,tablaClientes);
	
	printf("Cual es la capacidad estimada  de un caja en clientes atendidos por hora: ");
	scanf("%d", &capacidad);
    printf("\n\nImpresion de resultados ");
	printf("\n------------");
    for (i=0;i<Horarios;i++){
		printf("--------");
    }
	printf("\nHoras:\n");
	for (i=0;i<Horarios;i++){
		printf("%d-%d\t",mHoras[i][0],mHoras[i][1]);
    }
	printf("\n------------");
    for (i=0;i<Horarios;i++){
		printf("--------");
    }
    
	capacidadSalida(Horarios,capacidad,tablaClientes);
	salidaClientes(Horarios,tablaClientes);
	input(Horarios,tablaClientes);
	output(Horarios,tablaClientes);

	imprimir(Horarios,tablaClientes);
	recomendacion(Horarios,tablaClientes,capacidad);
	printf("\a");
	return 0;
}

