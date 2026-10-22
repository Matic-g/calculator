#include "calculator.hpp"
#include <stdexcept>
#include <cmath>

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b == 0) throw std::invalid_argument("Napaka: Deljenje z 0");
    return a / b;
}
double power(double a, double b) { return std::pow(a, b); }
int modul(int a, int b) {
    if (b == 0) throw std::invalid_argument("Deljenje z 0");
    return a % b;
}