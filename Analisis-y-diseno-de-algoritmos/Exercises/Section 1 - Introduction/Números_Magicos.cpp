#include <cstdlib>
#include <iostream>

int casos = 0;
int lInferior = 0;
int lSuperior = 0;
int perfecto[] = {6, 28, 496, 8128};
int total = 0;

int main(){
  std::cin >> casos;

  for(int i = 0; i < casos; i++){
    total = 0;
    std::cin >> lInferior;
    std::cin >> lSuperior;

    for (int j = 0; j < 4; j++){
      if (perfecto[j] >= lInferior && perfecto[j] <= lSuperior) total +=1;
    }

    std::cout << total << std::endl;
  }
  
  return EXIT_SUCCESS;
}
