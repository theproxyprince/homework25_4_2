#include <iostream>
#include "kbd.h"

void input(double* arr, int length) {

    for (int i = 0; i < length; ++i) {
        std::cout << "Input buffer[" << i << "]: ";
        std::cin >> arr[i];
    }

    std::cout << "Input's finished!\n\n";
}