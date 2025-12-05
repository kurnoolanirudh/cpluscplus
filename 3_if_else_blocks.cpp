#include <iostream>

int main() {
    int num = 2;

    if (num % 2 == 0) {
        std::cout << "even\n";
    }  else {
        std::cout << "odd\n";
    }

    if (num % 3 == 0) {
        std::cout << "multiple of 3\n";
    } else if (num % 5 == 0) {
        std::cout << "multiple of 5\n";
    } else if (num % 2 == 0) {
        std::cout << "multiple of 2\n";
    } else {
        std::cout << "neither a multiple of 2, 3 or 5";
    }
}
