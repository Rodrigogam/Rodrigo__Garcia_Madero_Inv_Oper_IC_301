/**
*@file       main.c 
*@brief     Sección principal del código.
*@author    Rodrigo Garcia Madero.
*@date      09-01-2021 (código).
*@date      12-01-2021 (documentación).
*@todo      Implementar gráficos
*
*@param     i           Variable auxiliar para estructura "if" y "while".
*@param     j           Variable auxiliar para estructura "if" y "while".
*@param     filas       Variable para guardar la cantidad de filas.
*@param     colum    Variable para guardar la cantidad de columnas.
*@param     restricion     Almacena el número de restricciones que el usuario introduce.
*@param     matriz      Va a almacenar los datos de la función, en esta matriz se haran 
las operaciones del método simpex.
*/
#include <stdio.h>
#include <stdlib.h>
#include "MetdoSimplex.h"

int main(int argc, char *argv[]) {
    // Variables 
	int i,j,filas,colum,restricion;
	
    float matriz [TAM][TAM]; 
	printf("\t\t\t ______________\n");
	printf("\t\t\t|Metodo simplex|\n");	
	printf("\t\t\t|______________|\n");
	        
	printf("--------------------------------------------------\n");
	printf(" Ingresar el numero de restriccion= ");
	scanf("%d", &restricion);
    printf("--------------------------------------------------");
	filas=restricion+1;
	colum=4+restricion;
    
    //rellenar 0
	insertar0(matriz,filas,colum);	
	introducir_funcion(matriz,filas);                 
	introducir_restriccion(matriz,colum,restricion);		      
   
              
    printf("__________________________________________________________________________\n");
      printf("\t\t\t\t ---Tabla Simplex--- \n");
	imprimir(matriz,filas,colum); 
	
	//imprimir la tabla
    int ncolumna=menorC(matriz,filas,colum);
    int nfila=menorF(matriz,filas,colum,ncolumna);
    int pivote= matriz[nfila][ncolumna];
      printf("__________________________________________________________________________\n");
	printf("Elemnto pivote es %d    |",pivote);
	printf("     En la fila %d      |",nfila+1);
	printf("   En la columna %d       |\n",ncolumna+1);
	
	dividirentreP(matriz,colum,nfila,pivote);
	filanueva(matriz,nfila,ncolumna,colum,filas);
	
	
	  printf("__________________________________________________________________________\n");
	  printf("\t\t\t---El resultado de la tabla---\n");
	imprimir(matriz,filas,colum);
	
   i=0;
    while (i<ncolumna){
    	i=i+1;
	}
	if (i==1){
		j=2;
	}
	else j=1; 
	printf("__________________________________________________________________________\n");
	printf("\t\t-----Los resultados de la funcion Z son-----              |");    
    printf("\n                -Resultado de Z: %f                                |",matriz[filas-1][colum-1]);
    printf("\n                -Resultado de x%d: %f                                |",i,matriz[nfila][colum-1]);
    printf("\n                -Resultado de x%d: %d \a                                      |\n",j,0);
	printf("__________________________________________________________________________|\n");	
	return 0;
}

