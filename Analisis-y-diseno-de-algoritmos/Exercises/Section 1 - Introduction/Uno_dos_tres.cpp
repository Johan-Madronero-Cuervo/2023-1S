#include <iostream>
#include <string>

std::string numero = ("");
int repeticiones = 0;

int main(){

  std::cin >> repeticiones;

  for (int i = 0; i < repeticiones; i++){
    std::cin >> numero;

    if (numero.size() > 3){
      std::cout << "3" << std::endl;
    }

    else if (   (numero[1] == 'n' && numero[2] == 'o') || 
                (numero[0] == 'u' && numero[2] == 'o') ||
                (numero[0] == 'u' && numero[1] == 'n')){
      std::cout << "1" << std::endl;
    }
    else {
      std::cout << "2" << std::endl;
    }
  }
}