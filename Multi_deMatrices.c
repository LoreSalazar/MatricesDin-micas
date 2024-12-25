//Multiplicación de matrices nxn

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int **asignacionMatriz(int dimension);
void rellenarMatriz(int **matriz, int dimension);
void imprimirMatriz(int **matriz, int dimension);

int main(){
	
	int n = 0, **matriz;
	
	printf("SOLO SE PERMITEN MATRICES CUADRADAS \n ¿Cuantas filas tendrá su matriz?: ");
	scanf("%d", &n);
	
	matriz = asignacionMatriz(n);
	rellenarMatriz(matriz, n);
	imprimirMatriz(matriz, n);
	
	return 0;
}

int **asignacionMatriz(int dimension){
	int **matriz;
	int p = 0;
		
	matriz = (int**)calloc(dimension,sizeof(int *)); //Capa de punteros externos (puntero de puntero)
	
	for(p = 0; p < dimension; p++){
		matriz[p] = (int*)calloc(dimension,sizeof(int)); //Capa de punteros internos (vector)
	}
	return matriz;
	free(matriz);
}

void rellenarMatriz(int **matriz, int dimension){
	
	int i, j;
	
	for(i = 0; i < dimension; i++){
		for(j = 0; j < dimension; j++){
			printf("Introduce el valor de la fila %d y columna %d: ", i, j);
			scanf("%i", &matriz[i][j]);
		}
	}
}

void imprimirMatriz(int **matriz, int dimension){
	
	int i = 0, j = 0;
	
	printf("\n Tu matriz es: \n");
	
	for(i = 0; i < dimension; i++){
		for(j = 0; j < dimension; j++){
			printf("%d    ", matriz[i][j]);
		}
		printf("\n");
	}
}
