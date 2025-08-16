#include <iostream>
#include <string>

bool contiene01(const std::string& cadena) {
    for (size_t i = 0; i < cadena.length(); ++i) {
        if (cadena[i] != '0' && cadena[i] != '1') {
            return false; // Si encuentra un caracter distinto de 0 o 1, entonces (false)
        }
    }
    return true; // Si todos fueron 0 o 1, entonces (true)
}

int main() {
    std::string entrada;
    std::cout << "Ingrese una cadena binaria: ";
    std::cin >> entrada;
    if (contiene01(entrada))
        std::cout << "Cadena ACEPTADA (es binaria)\n";
    else
        std::cout << "Cadena RECHAZADA\n";
    return 0;
}


