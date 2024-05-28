#include <iostream>

class Pessoa{
    private:
        int idade = 24;
    protected:
        double altura = 1.70;
    public:
        void nome() {
             std::cout << "Julio" << '\n';
        }
        double display_altura(){
            return altura;
        }
        int display_idade(){
            return idade;
        }
};

class Habilidade : public Pessoa {
    public:
        void idioma(){
            std::cout << "Pt-BR" << '\n';
        }
};

class Dados : public Habilidade {

};

int main( int argc, char **argv ) {
    Dados dados;

    std::cout << "O nome e: " << '\n';
    dados.nome();

    std::cout << "A habilidade e: " << '\n';
    dados.idioma();

    std::cout << "A idade e: " << dados.display_idade() << '\n';

    std::cout << "A altura e: " << dados.display_altura() << '\n';

    return 0;
}
