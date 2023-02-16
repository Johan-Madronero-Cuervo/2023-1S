#include <iostream>
#include <cmath>

int n = 0;
int casos = 0;
float resultado = 0;

int main()
{
    std::cin >> casos;
    
    for (int i = 0; i < casos; i++){
        
        std::cin >> n;
        
        resultado = std::sqrt((n*(n+1))/2);
        
        if (std::floor(resultado) == resultado){
            std::cout << resultado << std::endl;
            continue;
        }
        
        std::cout << "NO" << std::endl;
    }
    
    return 0;
}
