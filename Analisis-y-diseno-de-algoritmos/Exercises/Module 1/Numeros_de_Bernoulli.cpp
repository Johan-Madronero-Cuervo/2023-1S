#include <iostream>

int power(int x, int y, int p)
{
    // Function implemented by Geek for Geeks and used for Design and Analysis of
    // algorithms 2023 - 1S 
 
    // Initialize answer
    int res = 1;
 
    // Check till the number becomes zero
    while (y > 0) {
 
        // If y is odd, multiply x with result
        if (y % 2 == 1)
            res = (res * x);
 
        // y = y/2
        y = y >> 1;
 
        // Change x to x^2
        x = (x * x);
    }
    return res % p;
}

int main()
{
    int casos;
    int n;
    int p;
    int resultado;
    int dummy;
    int c = 49999;
    
    std::cin >> casos;
    
    for (int i = 0; i < casos; i++){
        std::cin >> n;
        std::cin >> p;
        
        resultado = 0;
        
        for (int j = 0; j < n; j++){
            
            resultado += power(j+1, p, c);
        }
        
        std::cout << resultado % c << std::endl;
    }
    return 0;
}
