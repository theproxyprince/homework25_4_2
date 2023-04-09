#include <iostream>
#include "cpu.h"


double compute(double* massive, int length) {
    double sum = 0;
    for (int i = 0; i < length; ++i) {
        sum += massive[i];
    }
    return sum;
}