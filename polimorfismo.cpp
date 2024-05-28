#include <iostream>

class Pessoa{
    public:
        int num() {
            return 10;
        }
        int num( int num ){
            return num;
        }
};

class Turma : public Pessoa{
    public:
        int num() {
            return 20;
        }
        int num( int num ){
            return num;
        }
};

int main( int argc, char **argv ) {
    Pessoa p;
    Turma t;

    std::cout << "num() de pessoa é: " << p.num() << '\n';
    std::cout << "num(int num) de pessoa é: " << p.num(10) << '\n';
    std::cout << "num() de turma é: " << t.num() << '\n';
    std::cout << "num(int num) de turma é: " << t.num(20) << '\n';

    return 0;
}
