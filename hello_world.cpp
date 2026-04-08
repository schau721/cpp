#include <iostream>
#include <string>

int main()
{
    // Запрашиваем имя пользователя.
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    // Выводим приветствие в стандартный поток вывода.
    std::cout << "Hello world from @" << name << std::endl;
    return 0;
}
