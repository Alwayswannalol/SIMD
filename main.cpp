#include "addition/addition.h"
#include <iostream>

int main()
{
    alignas(16) float a[4] = {1.0f, 2.0f, 3.0f, 4.0f};
    alignas(16) float b[4] = {1.5f, 2.5f, 3.5f, 4.5f};
    alignas(16) float res[4];

    simd::add(4, a, b, res);

    for (int i = 0; i < 4; i++)
    {
        std::cout << *(res + i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
