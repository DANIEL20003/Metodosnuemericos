# include <iostream>
#include <cmath>

int main() {
    float a, b, c;
    std::cout << "Ingrese los coeficientes a, b y c: ";
    std::cin >> a >> b >> c;

    if (a == 0) {
        std::cout << "El coeficiente 'a' no puede ser cero en una ecuación cuadrática." << std::endl;
        return 1;
    }

    float discriminante = b * b - 4 * a * c;

    if (discriminante < 0) {
        std::cout << "La ecuación no tiene soluciones reales." << std::endl;
    } else {
        float x1 = (-b + std::sqrt(discriminante)) / (2 * a);
        float x2 = (-b - std::sqrt(discriminante)) / (2 * a);

        std::cout << "Las soluciones son: x1 = " << x1 << ", x2 = " << x2 << std::endl;
    }

    return 0;
}