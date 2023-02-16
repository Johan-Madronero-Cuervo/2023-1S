#include <iostream>

int main()
{
    int repeticiones = 0;
    
    std::cin >> repeticiones;
    
    for (int i = 0; i < repeticiones; i++){
        // Indice de conteo
        int indice = 0;
        std::cin >> indice;
        
        // Definimos variables para almacenar el count
        int SSS = 0;
        int SSC = 0;
        int SCS = 0;
        int SCC = 0;
        int CSS = 0;
        int CSC = 0;
        int CCS = 0;
        int CCC = 0;
        
        // setup
        std::string lanzamientos = "";
        std::cin >> lanzamientos;
        
        for (int i = 0; i < 38; i++){
            std::string split;
            split = lanzamientos[i]; 
            split += lanzamientos[i+1];
            split += lanzamientos[i+2];
            
           if (split == "SSS") SSS += 1;
           else if (split == "SSC") SSC += 1;
           else if (split == "SCS") SCS += 1;
           else if (split == "SCC") SCC += 1;
           else if (split == "CSS") CSS += 1;
           else if (split == "CSC") CSC += 1;
           else if (split == "CCS") CCS += 1;
           else if (split == "CCC") CCC += 1;
        }
        std::cout <<
        indice << " " <<
        SSS << " " <<
        SSC << " " <<
        SCS << " " <<
        SCC << " " <<
        CSS << " " <<
        CSC << " " <<
        CCS << " " <<
        CCC << 
        std::endl;
    }
}
