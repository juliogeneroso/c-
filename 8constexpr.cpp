#include <iostream>

//Diminuir tempo de compilação com cálculos
constexpr long int fib(int n) {
    return (n <= 1) ? n : fib(n-1) + fib(n-2);

}

long int fib2(int n) {
    return (n <= 1) ? n : fib(n-1) + fib(n-2);

}

int main (int argc, char** argv) {
    std::cout << "O número Fibonacci com constexpr é: " << fib(30) << '\n';
    std::cout << "O número Fibonacci sem constexpr é: " << fib2(30) << '\n';
    return 0;
}