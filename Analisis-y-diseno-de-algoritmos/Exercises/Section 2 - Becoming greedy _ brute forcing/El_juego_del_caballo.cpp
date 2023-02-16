#include <iostream>
#include <unordered_map>

int casos = 0;
std::string row = "";
std::string column = "";
std::string coordinate = "";

int main()
{
    std::cin >> casos;
    
    for (int i = 0; i < casos; i++){
        const std::unordered_map<std::string, int> saltos = {
            {"F7", 1},
            {"D6", 2},
            {"B5", 3},
            {"A3", 4},
            {"D2", 6},
            {"F1", 7},
            {"B1", 5},
            {"H8", 0}
        };
        
        std::cin >> row;
        std::cin >> column;
        
        coordinate = row + column;
    
        try{
            std::cout << saltos.at(coordinate) << std::endl;
        }
        
        catch(...){
           std::cout << "Demasiados movimientos"  << std::endl;
        }
    }
}