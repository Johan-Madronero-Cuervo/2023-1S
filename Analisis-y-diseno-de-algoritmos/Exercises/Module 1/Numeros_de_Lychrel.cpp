#include <iostream>

bool IsCapicua(unsigned long int n){
    unsigned long long int num = n;
    unsigned long long int rev = 0;
    unsigned long long int dig = 0;
    
    while (num > 0){
        dig = num % 10;
        rev = rev * 10 + dig;
        num = num /10;
        int breakpoint = 0;
    }
    
    return (n == rev);
}

unsigned long long int invert(unsigned long int in){
    unsigned long long int out = 0;
    
    while(in){
        out *= 10;
        out += in % 10;
        in /= 10;
    }
    
    return out;
}

int main()
{
    unsigned long long int max = 1e10;
    unsigned long long int numero;
    int casos;
    int iters = 0;
    
    while(1){
        std::cin >> numero;
        if (numero == 0){
            break;
        }
        
        iters = 0;
        while(1){
            if (IsCapicua(numero)){
                std::cout << iters << std::endl;
                break;
            }
            
            else if (numero > max){
                std::cout << "L" << std::endl;
                break;
            }
            
            numero = numero + invert(numero);
            iters++;
        }
    }
    
    return 0;
}