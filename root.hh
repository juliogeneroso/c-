#ifndef ROOT_H
#define ROOT_H

namespace root {
    class Terminal {
        public:
            void terminal(){
                std::cout << "Terminal aberto 1" << '\n';
            }

            void root(){
                std::cout << "Terminal aberto 2" << '\n';
            }
    };
}

#endif