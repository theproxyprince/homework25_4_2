#include <iostream>
#include "cpu.h"
#include "gpu.h"
#include "kbd.h"
#include "ram.h"
#include "disk.h"

constexpr int SIZE = 8;

int main() {
    std::cout << "Input command(input, display, sum, load, save, exit): ";
    std::string inp;
    std::cin >> inp;
    while (inp != "exit") {
        if (inp == "sum") {
            std::cout << compute(buffer, SIZE) << std::endl;
        } else if (inp == "save") {
            save(buffer, SIZE);
        } else if (inp == "load") {
            load(buffer, SIZE);
        } else if (inp == "input") {
            input(buffer, SIZE);

        } else if (inp == "display") {
            display(buffer, SIZE);
        } else {
            std::cout << "Invalid input, try again." << std::endl;
        }

        std::cout << std::endl;
        std::cout << "Input command: ";
        std::cin >> inp;
    }
    std::cout << "Program's finished!";
}