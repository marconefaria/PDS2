#include <iostream>
#include <string>

int main() {
    int numero, cont, aux = 1;
    std::cin >> numero;

    while(aux <= numero){
        cont = 0;
        for(int i = numero - 1; i >= numero - aux; i--)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
        aux++;
    }

    aux = numero;
    while(aux > 0){
        cont = 0;
        for(int i = aux - 1; i > 0; i--)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
        aux--;
    }
}