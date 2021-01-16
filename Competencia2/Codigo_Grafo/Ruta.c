/**
*@file   Ruta.c
*@brief  Secci�n para las funciones del c�digo.
*/
#include "Grafos.h"
/**
*@brief     Inserta 0 en toda la matriz.
*\details   Al ejecutarse llenara toda a matriz de 0.
*@param     m       Variable para la matriz.
*@param     fc       Variable para el n�mero de filas y columnas tienen la misma cantidad.
*\return    void.
*/
void insertar0(int m[][TAM],int fc){
	int i,j;
	for (i=0;i<fc;i++){
		for (j=0;j<fc;j++){
			m[i][j]=0;
		}
    } 
}
/**
*@brief     Imprime la cadena de dos dimesiones.
*\details   Al ejecutarse imprime la matriz en formato de tabla.
*@param     m       Variable para la matriz.
*@param     fc       Variable para el n�mero de filas y columnas tienen la misma cantidad.
*\return    void.
*/
void imprimir(int m[][TAM],int fc){
	int i,j;
	printf("\n|X\\Y|\t"); 
   for (j=0;j<fc;j++){  
   	    printf("%d\t",j+1);
	}
   printf("\n-----");
   for (j=0;j<fc;j++){  
		printf("--------");
		}
	printf("\n");	
   for (i=0;i<fc;i++){
        printf("| %d |\t",i+1);  	
		for (j=0;j<fc;j++){  
			printf("%d\t",m[i][j]);
			if(j == fc-1){
				printf("\n");
			}
		}
    }
}
/**
*@brief   El ususario introduce las adyacencias del problema.
*\details Esta funci�n contiene una estrucutura "for" para introducir los datos segun el numero de adyacencias.
*\details Los valores seran guardados en las variables "x" y "y".
*@param   g       Variable para la matriz auxiliar.
*@param   m       Variable para la matriz.
*@param   f       Variable para el n�mero de filas.
*\return    void.
*/
void introducir_adya(int g[][2],int m[][TAM],int f){
	int i,x,y;
	for(i=0;i<f;i++){
	printf("");	
	printf("    Ingrese las coordenadas de la adyacencia %d  \n",i+1);
	printf("Ingrese  |X|: ");
	scanf("%d", &x);
	printf("Ingrese  |Y|: ");
	scanf("%d", &y);
	printf("------------------------------------------------------\n");
	m [x-1][y-1]=1;
	g [i][0]=x;
	g [i][1]=y;
}
}

/**
*@brief   Busca si existe un ruta por medio de la recursividad y con el uso de la matriz secundaria.
*\details Notar como en la secci�n de return dentro de los valores de la funci�n "buscar" en vez de usar
 "a" se usa "d" para poder usar correctamente la recursividad.
*@param   g     Variable para la matriz auxiliar.
*@param   m     Variable para la matriz.
*@param   a     Variable para alojar el punto "A" de la ruta.
*@param   b     Variable para alojar el punto "B" de la ruta.
*@param   fc    Variable para el n�mero de filas y columnas (tienen la misma cantidad).
*@param   ax    Variable auxiliar para la funci�n recursiva.
*\return  Retorna la variable ax, con un valor de 0 o 1 seg�n sea el caso.
*@todo    Implementar una restriccion para evitar problemas con los nodos sin adyacencia de salida. 
*/
int buscar(int g[][2],int m[][TAM],int a,int b,int fc,int ax){
	int i,j,d;
	if (m[a-1][b-1]!=1){
		for (i=0;i<fc+1;i++){
			if (g[i][0]==a){
				d=g[i][1];
				return buscar(g,m,d,b,fc,ax);
			}
			//return?
		}
		
	}
	else {
		ax=1;
		return ax;
	}
	
	}


