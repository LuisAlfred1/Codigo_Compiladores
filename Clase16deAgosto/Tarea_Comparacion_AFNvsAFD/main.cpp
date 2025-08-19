
#include <iostream>
#include "afn.h"
#include "afd.h"

int main() {
    std::string cadena;
    std::cout << "Comparacion AFN vs AFD - Codigo Binario";
    std::cout << "\nIngrese una cadena: ";
    std::cin >> cadena;

    std::cout << "AFD: " << (afd(cadena) ? "Aceptada (es binario)" : "Rechazada (no es binario)") << std::endl;
    std::cout << "AFN: " << (afn(cadena) ? "Aceptada (es binario)" : "Rechazada (no es binario)") << std::endl;
}
