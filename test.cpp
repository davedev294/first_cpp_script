
#include <iostream>

int sumar(int a, int b){
    return a + b;
}

int multiplicar(int a, int b){
    return a * b;
}

int entrada(){
    int n;
    std::cin >> n;
    return n;
}

int seleccion(){
    int opcion;

    while (true){
        std::cout << "Elige Suma 1 Multiplicacion 2.\n";
        
        if (std::cin >> opcion){
            if (opcion >= 1 && opcion <= 2){
                std::cout << "Perfecto";
            }else{
                std::cout << "no, intentalo de nuevo";
            }
        }else{
            std::cout << "no, intentalo de nuevo";

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }

    return opcion;
}

int main(){
    int a = seleccion();

    if (a == 1) {
        std::cout << "Has elegido suma!\n";
    } else if (a == 2) {
        std::cout << "Has elegido multiplicación!\n";
    } else {
        std::cout << "Opción no válida.\n";
        return 1;
    }

    std::cout << "Introduce el primer número\n";
    int su = entrada();

    std::cout << "Introduce el segundo número\n";
    int sd = entrada();

    if (a == 1) {
        std::cout << "Resultado: " << sumar(su, sd) << "\n";
    } else {
        std::cout << "Resultado: " << multiplicar(su, sd) << "\n";
    }

    return 0;

}