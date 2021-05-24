// Copyright (c) 2021 Brian Musembi, All rights reserved
//
// Created by Brian Musembi
// Created on May 2021
// This program converts temperature from degrees °Celsius to °Fahrenheit

#include <iostream>
#include <string>


void Fahrenheit() {
    // this function converts temperature from °Celsius to °Fahrenheit

    // variable declarations
    int fahrenheitTemp;
    std::string celsiusTemp;
    int celsiusTempInt;

    // input
    std::cout << "Input a temperature in degrees celsius(°C): ";
    std::cin >> celsiusTemp;
    std::cout << "" << std::endl;

    // process
    try {
        celsiusTempInt = std::stoi(celsiusTemp);

        fahrenheitTemp = (9 * celsiusTempInt) / 5 + 32;

        // output
        std::cout << celsiusTempInt << "°C is equal to " << fahrenheitTemp
                  << "°F " << std::endl;
    } catch (std::invalid_argument) {
        std::cout << celsiusTemp << " is not a temperature! "
                  << "Please try again." << std::endl;
    }
}

int main() {
    // this function calls other functions

    // fahrenheit function
    Fahrenheit();
}
