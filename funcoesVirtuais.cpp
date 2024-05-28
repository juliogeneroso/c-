#include <iostream>

class Mae {
    public:
        virtual void mensagem() {
            std::cout << "eu sou a mae" << '\n';
        }
};

class Filha : public Mae {
    public: 
        void mensagem() {
            std::cout << "eu sou a filha" << '\n';
        }
};

class Neta : public Filha {
    public: 
        void mensagem() {
            std::cout << "eu sou a neta" << '\n';
        }
};

void responde ( Mae * mae ){
    mae -> mensagem();
}

int main (int argc, char **argv ) {

    Mae mae;
    Filha filha;
    Neta neta;

    mae.mensagem();
    filha.mensagem();
    neta.mensagem();

    std::cout << "\n-------------------\n";

    responde(&mae);
    responde(&filha);
    responde(&neta);

    return 0;
}