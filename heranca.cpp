#include <iostream>

class Pessoa{
    public:
        void nome() {
             std::cout << "Julio" << '\n';
        }
};

class Habilidade : public Pessoa {
    public:
        void idioma(){
            std::cout << "Pt-BR" << '\n';
        }
};

int main( int argc, char **argv ) {
    Habilidade habilidade;
    std::cout << "O nome e: " << '\n';
    habilidade.nome();
    std::cout << "A habilidade e: " << '\n';
    habilidade.idioma();
    return 0;
}
