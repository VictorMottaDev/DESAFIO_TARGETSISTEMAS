#include <iostream>
#include <string>

int main() {
    std::string texto;
    int contador = 0;

    std::cout << "Digite uma string: ";
    std::getline(std::cin, texto);

    for (char c : texto) {
        if (c == 'a' || c == 'A') {
            contador++;
        }
    }

    if (contador > 0) {
        std::cout << "A letra 'a' aparece " << contador << " vezes na string." << std::endl;
    } else {
        std::cout << "A letra 'a' não foi encontrada na string." << std::endl;
    }

    return 0;
}
