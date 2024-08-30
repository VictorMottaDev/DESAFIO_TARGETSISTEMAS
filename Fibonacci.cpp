#include <iostream>

bool pertenceFibonacci(int numero) {
    int a = 0;
    int b = 1;
    if (numero == a || numero == b) {
        return true;
    }
    int c = a + b;
    while (c <= numero) {
        if (c == numero) {
            return true;
        }
        a = b;
        b = c;
        c = a + b;
    }
    return false;
}

int main() {
    int numero;

    std::cout << "Digite um número: ";
    std::cin >> numero;

    if (pertenceFibonacci(numero)) {
        std::cout << "O número " << numero << " pertence à sequência de Fibonacci." << std::endl;
    } else {
        std::cout << "O número " << numero << " NÃO pertence à sequência de Fibonacci." << std::endl;
    }

    return 0;
}