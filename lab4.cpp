/*Desarrolle un algoritmo que llene 2 vectores de tamaño 10 con números aleatorios entre 1 
y 100. Luego enfrente los vectores posición a posición y asigne el puntaje al vector ganador 
de la siguiente forma*/
#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int vector1[10];
	int vector2[10];
	int i,j;
	int contA=0,contB=0;
	
	srand (time (0));
	
	
	for(i=0;i<10;i++){
		vector1[i]=rand()%100+1;
	}
	
	for(j=0;j<10;j++){
		vector2[j]=rand()%100+1;
	}
	
	
	for(i=0;i<10;i++){
		
		if(vector1[i]>vector2[i]){
			contA++;	
		}else if(vector1[i]<vector2[i]){
			contB++;
		}else if(vector1[i]==vector2[i]){
			contA++;
			contB++;
		}
		
	}
		printf("la lista de A es :\n");
	for(i=0;i<10;i++){
		printf("(%d) = %d\n",i+1,vector1[i]);
	}
		printf("la lista de B es :\n");
	for(j=0;j<10;j++){
		printf("(%d) = %d\n",j+1,vector2[j]);
	}
	
	printf("El contador de A es de = [%d] y B de = [%d]\n",contA,contB);
	
	if(contA<contB){
		printf("El ganador es B\n");
	}else{
		printf("El ganador es A\n");
	}
	
	
}
