#include <cstdlib>
#include <iostream>

int main(){
  int t = 0;
  std::cin >> t;
  int a = 0;
  int b = 0;

  for (int i = 0; i < t; i++){
    std::cin >> a;
    std::cin >> b;

    if (a > b){
      std::cout << ">" << std::endl;
    }

    else if (a < b){
      std::cout << "<" << std::endl;
    }

    else {
      std::cout << "=" << std::endl;
    }
  }

  return EXIT_SUCCESS;
}
