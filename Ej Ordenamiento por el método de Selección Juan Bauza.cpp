//Ejemplo del ordenamiento por el método de Selección, Juan Bauza

#include <iostream>
main (){

int vector[9]= {20,21,27,33,68,39,90,12,19};
int i,j,auxiliar,menor;

for(i=0; i<9; i++){
menor = i;

for(j=i+1; j<9; j++){

if(vector[j] < vector[menor]){
menor = j;
	
}
}

auxiliar = vector[i];
vector[i] = vector[menor];
vector[menor] = auxiliar;

}
printf("Orden de menor a mayor: ");

for(i=0; i<9; i++){
printf("%d ", vector[i]);
}
}
