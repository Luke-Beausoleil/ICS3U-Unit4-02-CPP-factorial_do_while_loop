// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program calculates factorial using a do while loop

#include <iostream>
#include <string>

int main() {
    // this function finds factorial

    // variables
    int loopCounter = 1;
    int factorial = 1;
    std::string numberAsString;
    int integer;
    float number;

    // input
    std::cout << "Enter a positive integer or zero: ";
    std::cin >> numberAsString;

    // process & output
    try {
        float number = std::stof(numberAsString);
        if (number == 0) {
            std::cout << "\n0 factorial is 1" <<std::endl;
        } else {
            try {
                integer = std::stoi(numberAsString);
                if (integer > 0) {
                    if (number == integer) {
                        do {
                            loopCounter = loopCounter + 1;
                            factorial = loopCounter * factorial;
                        } while (loopCounter < integer);
                        std::cout << "\n" << integer << " factorial is "
                            << factorial << std::endl;
                    } else {
                        std::cout << "\nInvalid. Enter a positive integer"
                              " or zero" << std::endl;
                    }

                } else {
                    std::cout << "\nInvalid. Enter a positive integer or zero"
                          << std::endl;
                }
            }
            catch (std::invalid_argument) {
                std::cout << "\nInvalid. Enter a positive integer or zero"
                      << std::endl;
                }
        }
    }
    catch (std::invalid_argument) {
        std::cout << "\nInvalid. Enter a positive integer or zero."
              << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
