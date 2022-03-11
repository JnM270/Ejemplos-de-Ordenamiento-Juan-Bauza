//Ejemplo del ordenamiento por el método Burbuja, Juan Bauza

#include <iostream>
main (){

int vector[9]= {20,21,27,33,68,39,90,12,19};
int auxiliar;

for(int i=0; i<9; i++){
	
for(int j=0; j<9; j++){
	
if(vector[j] > vector[j+1]){
	
auxiliar= vector[j+1];
vector[j+1] = vector[j];
vector[j] = auxiliar;

}
}
}

printf("Numeros ordenados de forma creciente: ");

for(int i = 1; i<10; i++){
printf("%d ", vector[i]);
}
return 0;
}
