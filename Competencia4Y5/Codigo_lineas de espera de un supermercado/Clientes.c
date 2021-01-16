/**
*@file   Clientes.c
*@brief  Clase Clientes.c.
*/
#include "Clientes.h"
/**
*@brief     Imprime la matriz.
*\details   Al ejecutarse imprimira fila por fila .
*@param     Horas     Guarda elnúmero de horarios que hay por lo que se utiliza en el ciclo "for".
*@param     matriz    En esa matriz estan guardados los datos que el usuario introdujo y los que se añadieron con los calculos.
*\return    void.
*/
void imprimir(int Horas, int matriz[7][TAM]){
	int i,j;   
	printf("\nClientes:\n");
	for (i=0;i<Horas;i++){
		printf("%d\t",matriz[0][i]);
    }
printf("\n--------------------------------------------------------------------------\n");
	printf("\nCajas:\n");
    for (i=0;i<Horas;i++){
		printf("%d\t",matriz[1][i]);
    }
printf("\n--------------------------------------------------------------------------\n");
	printf("\nCapacidad salidas\n");
    for (i=0;i<Horas;i++){
		printf("%d\t",matriz[2][i]);
    }
printf("\n--------------------------------------------------------------------------\n");
	printf("\nSalida clientes:\n");
    for (i=0;i<Horas;i++){
		printf("%d\t",matriz[3][i]);
    }
printf("\n--------------------------------------------------------------------------\n");  
	printf("\nCola de espera:\n");
	for (i=0;i<Horas;i++){
		printf("%d\t",matriz[4][i]);
    }
printf("\n--------------------------------------------------------------------------\n");
    printf("\nInput:\n");
	for (i=0;i<Horas;i++){
		printf("%d\t",matriz[5][i]);
    }
printf("\n--------------------------------------------------------------------------\n");
	printf("\nOutput:\n");
	for (i=0;i<Horas;i++){
		printf("%d\t",matriz[6][i]);
    }

    printf("\n------------");
    for (i=0;i<Horas;i++){
		printf("--------");
    }
}
/**
*@brief     Va solicita el usuario los datos de hora de inicio-fin, el número de cajas y el número de clientes en espera.
*\details   Contiene un for ya que se repetira segun elnumero de horarios que introdujo el usuario.
*@param     Horas          Guardado el número de horarios que hay por lo que se utiliza como un rango en el cliclo "for".
*@param     hMatriz        Es un matriz se va  guardando los datos de la hora de inicio y fin.
*@param     matriz         En esta matriz se guardaran los datos de los clientes y el numero de cajas.
*\return    void.
*/
void llenadoDatos(int Horas, int hMatriz[][2],int matriz[7][TAM]){
	int i;
	for(i=0;i<Horas;i++){
		printf("\nHorario %d\n___________________",(i+1));
		printf("\nHora de inicio: ");
		scanf("%d", &hMatriz[i][0]);
		
		printf("Hora de fin: ");
		scanf("%d", &hMatriz[i][1]);
		
		printf("Numero de clientes: ");
		scanf("%d", &matriz[0][i]);
		
		printf("Numero de cajas abiertas: ");
		scanf("%d", &matriz[1][i]);
	}
	printf("\n___________________________________\n");
}
/**
*@brief     Se va arealiza el calculo correspondiente a la capcidad de salida.
*\details   Al ejecutarse llenara la sección matriz.
*@param     Rango      Se va guardado el número de horarios que hay por lo que se utiliza.
*@param     capaciad   Esta variable se guarda cual es la capacidad de atender clientes.
*@param     matriz     Esta matriz se realizarn los calculos para la capcidad de salida con los valores.
*\return    void.
*/
void capacidadSalida(int Rango, int capaciad, int matriz[7][TAM]){
	int i;
	for (i=0;i<Rango;i++){
		matriz[2][i]=matriz[1][i]*capaciad;
    }
}
/**
*@brief     Se realiza el calculo correspondiente a la salida de clientes y a la cola de espera.
*\details   Al ejecutarse llenara la matriz.
*@param     Rango      Tiene guardado el número de horarios que hay por lo que se utiliza como un rango en ciclo "for".
*@param     matriz     Se utilizan los datos de la matriz para obtener nuevos datos e irlos guardando.
*\return    void.
*/
void salidaClientes(int Rango, int matriz[7][TAM]){
	int i;
	if(matriz[0][0]>=matriz[2][0]){
		matriz[3][0]=matriz[2][0];
		matriz[4][0]=matriz[0][0]-matriz[2][0];
	}
	else{
		matriz[3][0]=matriz[0][0];
		matriz[4][0]=0;		
	}
	
	if(Rango>1){
		for(i=1;i<Rango;i++){
			if(matriz[0][i]+matriz[4][i-1]>=matriz[2][i]){
				matriz[3][i]=matriz[2][i];
		        matriz[4][i]=(matriz[0][i]+matriz[4][i-1])-matriz[2][i];
			}
			else{
				matriz[3][i]=matriz[0][i]+matriz[4][i-1];
	        	matriz[4][i]=0;	
			}
		}
	}
}
/**
*@brief     Se va  realiza el calculo correspondiente para Input.
*\details   Al ejecutarse llenara la sección matriz.
*@param     Rango      Guardado el número de horarios que hay por lo que se utiliza como un rango en los cliclos "if" y "for".
*@param     matriz     Los datos de la matriz para obtener nuevos datos e irlos guardando.
*\return    void.
*/
void input(int Rango, int matriz[7][TAM]){
	int i;
	matriz[5][0]=matriz[0][0];
	
	if(Rango>1){
		for(i=1;i<Rango;i++){
			matriz[5][i]=matriz[5][i-1]+matriz[0][i];
		}
	}
}
/**
*@brief     Se va realiza el calculo correspondiente para Output.
*\details   Al ejecutarse llenara la sección matriz.
*@param     Rango      Guardado el número de horarios que hay por lo que se utiliza como un rango en los cliclos "if" y "for".
*@param     matriz     Se utilizan los datos de la matriz para obtener nuevos datos e irlos guardando.
*\return    void.
*/
void output(int Rango, int matriz[7][TAM]){
	int i;
	matriz[6][0]=matriz[3][0];
	
	if(Rango>1){
		for(i=1;i<Rango;i++){
			matriz[6][i]=matriz[6][i-1]+matriz[3][i];
		}
	}
}
/**
*@brief     Los datos obtenidos de Input y Output se realiza una opción donde te va indicar la capasidad de cada horario.
*\details   Al ejecutarse va ser  calculo que va determinar cuantas cajas se necesitan para atender a todos los clientes que faltaron.
*@param     Rango      Se va guardado el número de horarios que hay por lo que se utiliza como un rango en los cliclos "if" y "for".
*@param     matriz     Es una matriz es utilizada para determinar si se necesitan caajs extra.
*@param     capaciad   En esta variable se guarda cual es la capacidad de atender clientes.
*\return    void.
*/
void recomendacion(int Rango, int matriz[7][TAM],int capaciad){
	int caja=0,i,mayor=0,posicion;
		printf("\n\n");
	printf("Aviso:\n");

	if (matriz[5][Rango-1]>matriz[6][Rango-1]){
		
		for (i=0;i<Rango;i++){
			if(matriz[4][i]>mayor){
				mayor=matriz[4][i];
				posicion=i+1;
			}
        }
		
		if ((matriz[5][Rango-1]-matriz[6][Rango-1])>capaciad){
			if((matriz[5][Rango-1]-matriz[6][Rango-1])%capaciad==0){
				caja=(matriz[5][Rango-1]-matriz[6][Rango-1])/capaciad;
				printf("Necesita %d extras en el horario numero %d.",caja,posicion);
			}
			else{
				caja=((matriz[5][Rango-1]-matriz[6][Rango-1])/capaciad)+1;
				printf("Necesita %d extras en el horario numero %d.",caja,posicion);
			}
		}
		else{
			printf("Necesita una caja extra en el horario numero %d.",posicion);
	    }
	}
	
}



