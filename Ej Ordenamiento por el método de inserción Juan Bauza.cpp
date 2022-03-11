#include <stdio.h> 

//Ejemplo del ordenamiento por el método de Inserción, Juan Bauza

int arreglo[9] = {20,21,27,33,68,39,90,12,19}; 

void IMParreglo() { 

int i; for(i=0; i<9; i++) 
printf("Numero %d: %d \n",i,arreglo[i]); 
} 
        
int main()  

{ 

int i,j,k;

IMParreglo(); 
for(i=0; i<9; i++){ 
j = i; 

while (j>=0 && arreglo[j]<arreglo[j-1]){ 
                
k=arreglo[j]; 
arreglo[j]=arreglo[j-1]; 
arreglo[j-1]=k; 
j--; 
} 
} 

printf("Arreglo ordenado de Numeros: \n"); 
    
IMParreglo(); 
}

