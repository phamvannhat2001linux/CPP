#include <iostream>

int main() {
    // Cách 1
    int a = 21;
    std::cout << "a (cach 1): " << a << std::endl;

    // Cách 2 from C11
    int b{21};
    std::cout << "b (cach 2): " << b << std::endl;

    // Cách 3
    int c(21);
    std::cout << "c (cach 3): " << c << std::endl;

    return 0;
}
