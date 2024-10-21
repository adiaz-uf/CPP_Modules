# include "Array.hpp"

int main()
{
    Array<int> nuevo(4);
    std::cout << "nuevo size: " <<nuevo.size() << std::endl;
    std::cout << "nuevo[0]:" << nuevo[0] << std::endl;
    std::cout << "nuevo[1]:" << nuevo[1] << std::endl;
    std::cout << "nuevo[2]:" << nuevo[2] << std::endl;
    std::cout << "nuevo[3]:" << nuevo[3] << std::endl;
    std::cout << "----------------" << std::endl;

    Array<int> copia(nuevo);
    std::cout << "copia size: " <<copia.size() << std::endl;
    std::cout << "copia[0]:" << copia[0] << std::endl;
    std::cout << "copia[1]:" << copia[1] << std::endl;
    std::cout << "copia[2]:" << copia[2] << std::endl;
    std::cout << "copia[3]:" << copia[3] << std::endl << std::endl;
    copia[0] = 1;
    copia[1] = 2;
    copia[2] = 3;
    copia[3] = 4;
    std::cout << "copia[0]:" << copia[0] << std::endl;
    std::cout << "copia[1]:" << copia[1] << std::endl;
    std::cout << "copia[2]:" << copia[2] << std::endl;
    std::cout << "copia[3]:" << copia[3] << std::endl << std::endl;

    std::cout << "nuevo[0]:" << nuevo[0] << std::endl;
    std::cout << "nuevo[1]:" << nuevo[1] << std::endl;
    std::cout << "nuevo[2]:" << nuevo[2] << std::endl;
    std::cout << "nuevo[3]:" << nuevo[3] << std::endl;
    std::cout << "----------------" << std::endl;

    Array<int> asignacion = copia;
    std::cout << "asignacion size: " <<asignacion.size() << std::endl;
    std::cout << "asignacion[0]:" << asignacion[0] << std::endl;
    std::cout << "asignacion[1]:" << asignacion[1] << std::endl;
    std::cout << "asignacion[2]:" << asignacion[2] << std::endl;
    std::cout << "asignacion[3]:" << asignacion[3] << std::endl << std::endl;
    asignacion[0] = 10;
    asignacion[1] = 20;
    asignacion[2] = 30;
    asignacion[3] = 40;
    std::cout << "asignacion[0]:" << asignacion[0] << std::endl;
    std::cout << "asignacion[1]:" << asignacion[1] << std::endl;
    std::cout << "asignacion[2]:" << asignacion[2] << std::endl;
    std::cout << "asignacion[3]:" << asignacion[3] << std::endl << std::endl;

    std::cout << "copia[0]:" << copia[0] << std::endl;
    std::cout << "copia[1]:" << copia[1] << std::endl;
    std::cout << "copia[2]:" << copia[2] << std::endl;
    std::cout << "copia[3]:" << copia[3] << std::endl << std::endl;

    std::cout << "nuevo[0]:" << nuevo[0] << std::endl;
    std::cout << "nuevo[1]:" << nuevo[1] << std::endl;
    std::cout << "nuevo[2]:" << nuevo[2] << std::endl;
    std::cout << "nuevo[3]:" << nuevo[3] << std::endl;
    try
    {
        std::cout << "nuevo[4]:" << nuevo[4] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "----------------" << std::endl;
    Array<std::string> str(2);
    str[0] = "Hola";
    str[1] = "Mundo";
    std::cout << "str size: " <<str.size() << std::endl;
    std::cout << "str[0]: " << str[0] << std::endl;
    std::cout << "str[1]: " << str[1] << std::endl;
    std::cout << "----------------" << std::endl;
    return 0;
}