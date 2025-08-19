
#include "afn.h"

bool afn(const std::string & cadena) {
    for (size_t i = 0; i < cadena.length(); i++) {
        if (cadena[i] != '0' && cadena[i] != '1') {
            return false;
        }
    }
    return true;
}
