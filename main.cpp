#include <iostream>

// лабораторная работа 3. Битовые операции
// Установить i-ый бит числа х (0<x<10^9) в 1

int main()
{
    std::cout << "Number: ";
    unsigned int x;
    std::cin >> x;

    std::cout << "i: ";
    int i;
    std::cin >> i;

    if (x > 0 && x < pow(10, 9))
    {   
        std::cout << "Result: ";

        // сдвигаем биты влево на i нулей, чтобы единица по счёту стала этим i
        std::cout << (x |= (1 << i)) << std::endl;
    }
    else
    {
        std::cout << "Wrong range of the choosen number" << std::endl;
    }

    return 0;
}