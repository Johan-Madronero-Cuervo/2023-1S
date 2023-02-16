#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <iostream>

int compare( const void * a, const void * b){
  return (*(int*)b - *(int*)a );
}

int casos = 0;
int articulosComprados = 0;
int articuloActual = 0;
int minimo = 0;

int main(){
  std::cin >> casos;

  for (int i = 0; i < casos; i++){
    std::cin >> articulosComprados;

    int *mercado = new int[articulosComprados];

    for (int j = 0; j < articulosComprados; j++){
      std::cin >> articuloActual;
      mercado[j] = articuloActual;
    }

    std::qsort(mercado, articulosComprados,sizeof(int), compare);

    minimo = 0;
    for (int k = 0; k < (articulosComprados/3); k++){
      minimo += mercado[((k*3) + 2)];
    }

    std::cout << minimo << std::endl;
    
    delete[] mercado;
  }
  
  return EXIT_SUCCESS;
}
