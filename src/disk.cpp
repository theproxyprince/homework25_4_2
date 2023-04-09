#include <iostream>
#include <fstream>
#include "disk.h"

void save(double* arr, int length) {
    std::ofstream data;
    data.open("../data.txt");

    if (!data.is_open()) {
        std::cout << "Can't open file data.txt";
        return;
    }

    for (int i = 0; i < length; ++i) {
        data << arr[i] << std::endl;
    }

    data.close();
}

void load(double* arr, int length) {
    std::ifstream data;
    data.open("../data.txt");
    if (!data.is_open()) {
        std::cout << "Can't open file data.txt";
        return;
    }
    for (int i = 0; i < length; ++i) {
        data >> arr[i];
    }
    data.close();
}