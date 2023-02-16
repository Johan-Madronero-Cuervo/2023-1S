#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    while(1){
    std::string saludo = "";
    std::cin >> saludo; 
    
    if (saludo == "#") break;
    
    const std::unordered_map<std::string, std::string> holas = {
        {"HOLA","ESPANOL"},
        {"HELLO","INGLES"},
        {"HALLO","ALEMAN"},
        {"BONJOUR","FRANCES"},
        {"CIAO","ITALIANO"},
        {"ZDRAVSTVUJTE","RUSO"},
    };
    
    try{
        std::cout << holas.at(saludo) << std::endl;
    }
    
    catch(...){
       std::cout << "DESCONOCIDO" << std::endl;
    }
  }
}
