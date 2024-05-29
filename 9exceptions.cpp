#include <iostream>

void tratamento(int * ptr, int x) {
    if(ptr == NULL || x == 0) {
        throw ptr;
    } else {
        std::cout << "O ponteiro é: " << *ptr << "e o número é: " << x << '\n';
    }
}

int main (int argc, char** argv) {
    int num = 10;
    int* ponteiro_num = nullptr;
    //int* ponteiro_num = &num;

    try{
        tratamento(ponteiro_num, num);
    } catch(...) {
        std::cout << "Erro identificado" << '\n';
    }

    return 0;
}