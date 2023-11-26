#include "fn.hpp" // https://raw.githubusercontent.com/senapk/cppaux/master/fn.hpp

// Nesse rascunho esta faltando a parte de dirigir o carro

class Car {
public:
    int pass;
    int passMax;
    int gas;
    int gasMax;
    int km;

    Car() {

    }

    void enter(){

    }

    void leave(){

    }

    void fuel(int gas){
        (void) gas;
    }
    
    std::string str(){
        return "amigo";
    }
};

int main() {
    Car car;
    while (true) {
        auto line = fn::input();
        auto args = fn::split(line, ' ');
        fn::write("$" + line);

        if      (args[0] == "show")  { fn::write(car.str());                }
        else if (args[0] == "enter") { car.enter();                         } 
        else if (args[0] == "leave") { car.leave();                         }
        else if (args[0] == "fuel")  { car.fuel(+args[1]);                  }
        else if (args[0] == "end")   { break;                               }
        else                         { fn::write("fail: comando invalido"); }
    }
}
