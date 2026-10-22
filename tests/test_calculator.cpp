#include <cassert>
#include <stdexcept>
#include "calculator.hpp"

int main() {
    assert(add(2, 3) == 5);
    assert(subtract(5, 3) == 2);
    assert(multiply(4, 3) == 12);
    assert(divide(10, 2) == 5);
    bool thrown = false;
    try { divide(1, 0); } catch (const std::invalid_argument&) { thrown = true; }
    assert(thrown);
    assert(squareRoot(9) == 3);
    return 0;
}