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
#include "../include/List.h"

typedef long testType;

int initializeTable(int &tableSize);


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
            dispersionFunction = new fdModule<testType>(tableSize);
            break;
        case 2:
            dispersionFunction = new fdSum<testType>(tableSize);
            break;
        case 3:
            dispersionFunction = new fdRandom<testType>(tableSize);
            break;
        default:
            std::cout << "Opcion invalida" << std::endl;
            return 1;
    };
    return 0;
    std::cout << "Seleccione una tecnica de dispersion: \n"
                 "  1.- Abierta \n"
                 "  2.- Cerrada" << std::endl;
    std::cin >> td;
    Sequence<testType> *sequence;
    switch (td) {
        case 1:
            sequence = new List<testType>();
            break;
        case 2:
            sequence = new Block<testType>();
            int blockSize, fe;
            std::cout << "Introduce el tamano del bloque:" << std::endl;
            std::cin >> blockSize;
            std::cout << "Seleccione una funcion de exploracion: \n"
                         "  1.- Lineal \n"
                         "  2.- Cuadratica \n"
                         "  3.- Doble dispersion \n"
                         "  4.- Redispersion " << std::endl;
            std::cin >> fe;
            ExplorationFunction<testType> *explorationFunction;
            switch (fe) {
                case 1:
                    explorationFunction = new feLineal<testType>();
                    break;
                case 2:
                    explorationFunction = new feQuadratic<testType>();
                    break;
                case 3:
                    explorationFunction = new feDispersion<testType>();
                    break;
                case 4:
                    explorationFunction = new feRedispersion<testType>();
                    break;
                default:
                    std::cout << "Opcion invalida" << std::endl;
                    return 1;
            }
            break;
        default:
            std::cout << "Opcion invalida" << std::endl;
            return 1;
    };
    return 0;
}

// TODO: implementar el menu
