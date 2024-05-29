#include <iostream>
#include "root.hh"

template <class T>
class Stack {
    public: 
        void pilha(T array, int max) {
            int i = {0};

            while(i < max){
                std::cout << "Os elementos do array são: " << array[i] << '\n';
                i++;
            }

        }
};

int main (int argc, char **argv ) {
    Stack<const std::string*> stack;
    std::string linguagens[] = {"Python","C","Javascript","Java"};
    int max = sizeof(linguagens) / sizeof(linguagens[0]);
    stack.pilha(linguagens, max);
    return 0;
}