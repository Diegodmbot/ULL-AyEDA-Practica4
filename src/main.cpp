#include <iostream>


#include "../include/fdModule.h"
#include "../include/fdSum.h"
#include "../include/fdRandom.h"
#include "../include/feLineal.h"
#include "../include/feQuadratic.h"
#include "../include/feDispersion.h"
#include "../include/feRedispersion.h"
#include "../include/HashTable.h"
#include "../include/Block.h"
#include "../include/Sequence.h"

typedef long testType;

int main() {
    int tableSize, fd, td;
    std::cout << "Introduce el tamano de la tabla:" << std::endl;
    std::cin >> tableSize;
    std::cout << "Seleccione una funcion de dispersion: \n"
                 "  1.- Modulo \n"
                 "  2.- Basada en la Suma \n"
                 "  3.- Pseudoaleatoria " << std::endl;
    std::cin >> fd;
    DispersionFunction<testType> *dispersionFunction;
    switch (fd) {
        case 1:
            std::cout << "Modulo" << std::endl;
            dispersionFunction = new fdModule<testType>(tableSize);
            break;
        case 2:
            std::cout << "Basada en la suma" << std::endl;
            dispersionFunction = new fdSum<testType>(tableSize);
            break;
        case 3:
            std::cout << "Pseudoaleatoria" << std::endl;
            dispersionFunction = new fdRandom<testType>(tableSize);
            break;
        default:
            std::cout << "Opcion invalida" << std::endl;
            return 1;
    };
    std::cout << "Seleccione una tecnica de dispersion: \n"
                 "  1.- Abierta \n"
                 "  2.- Cerrada" << std::endl;
    std::cin >> td;
    switch (td) {
        case 1:
            std::cout << "Modulo con abierta" << std::endl;
            break;
        case 2:
            std::cout << "Modulo con cerrada" << std::endl;
            int blockSize, fe;
            std::cout << "Introduce el tamano del bloque:" << std::endl;
            std::cin >> blockSize;
            std::cout << "Seleccione una funcion de exploracion: \n"
                         "  1.- Lineal \n"
                         "  2.- Cuadratica \n"
                         "  3.- Doble dispersion \n"
                         "  4.- Redispersion " << std::endl;
            std::cin >> fe;
            break;
        default:
            std::cout << "Opcion invalida" << std::endl;
            return 1;
    }
    return 0;
}
