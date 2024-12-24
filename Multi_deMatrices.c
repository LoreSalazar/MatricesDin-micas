//Multiplicación de matrices nxn

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	
	int n = 0, a = 0;
	int i = 0, j = 0, p = 0;
	int **matriz;
	
	printf("SOLO SE PERMITEN MATRICES CUADRADAS \n ¿Cuantas filas tendrá su matriz?: ");
	scanf("%d", &n);
	a = n;
	
	matriz = (int**)calloc(n,sizeof(int *)); //Capa de punteros externos (puntero de puntero)
	for(p = 0; p < a; p++){
		matriz[p] = (int*)calloc(n,sizeof(int)); //Capa de punteros internos (vector)
	}
	
	for(i = 0; i < a; i++){
		for(j = 0; j < a; j++){
			printf("Introduce el valor de la fila %d y columna %d: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("\n Tu matriz es: \n");
	
	for(i = 0; i < a; i++){
		for(j = 0; j < a; j++){
			printf("%d    ", matriz[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
