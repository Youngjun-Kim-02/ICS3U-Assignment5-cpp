// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program using nested loop

#include <iostream>

int main() {
    // this function using nested loop
    int counter1;
    int counter2;
    int theNumber;
    for (counter1 = 0; counter1 < 10; counter1++) {
        for (counter2 = 0; counter2 < 10; counter2++) {
            theNumber = counter1 * counter2;
            std::cout << counter1 << " X " << counter2 << " = " << theNumber
             << std::endl;
        }
    }
}
