#include <iostream>

int main() {
    int INDICE = 12, SOMA = 0, K = 1;

    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }

    std::cout << "O valor final de SOMA é: " << SOMA << std::endl;

    return 0;
}


// o valor de soma será 77