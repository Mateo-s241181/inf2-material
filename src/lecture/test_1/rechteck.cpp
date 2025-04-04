#include <iostream>

#include "rechteck.h"

int main() {

    //theroetisch keine Klammern nötig, wenn for Schleife in einer Zeile geschrieben wird 

    int x;

    std::cout << "Welche Seitenlänge soll das Quadrat haben?" << std::endl;

    std::cin >> x;

    print_square(x);

    return 0;
}


void print_square(int x) {

    for (int i = 0; i < x; i++) {

        for (int j = 0; j < x; j++){

            std::cout << "*";
        }

        std::cout << std::endl;

    }
}