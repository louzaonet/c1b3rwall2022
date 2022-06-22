#include <iostream>

int main()
{
    int x(0);
    std::cout << x << std::endl;

    x = x + 2147483647;
    std::cout << x << std::endl;

    x = x + 1;
    std::cout << x << std::endl;
    std::cout << std::endl;

    unsigned int y(0);
    std::cout << y << std::endl;

    y = y + 4294967295;
    std::cout << y << std::endl;

    y = y + 1;
    std::cout << y << std::endl;
}

