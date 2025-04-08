#include <iostream>

int main() {
    float x = 1.0f; // Inicializamos x con 1
    float z = 1.0f + x; // Inicializamos z con 1 + x
    int i = 0; // Contador de iteraciones

    while (z > 1.0f) {
        x /= 2.0f; // Dividimos x entre 2
        z = 1.0f + x; // Actualizamos z
        i++; // Incrementamos el contador
    }

    std::cout << "La precisión del computador es: " << x << std::endl;
    std::cout << "Número de iteraciones realizadas: " << i << std::endl;

    return 0;
}

 