// Copyright (c) Year Layla Michel All rights reserved.
//
// Created by: Layla Michel
// Date: June 2, 2021
// This program gets base and height from user and then calculates the area
// using functions (parameters, arguments)

#include <iostream>
#include <string>
#include <iomanip>

void CalcArea(float base, float height) {
    // calculate and display the area
    float area = (base * height) / 2.0;
    std::cout << "\n";
    std::cout << "The area of the triangle is: " << std::fixed <<
    std::setprecision(2) << std::setfill('0') << area << "cm².\n";
}


int main() {
    // declare variables
    std::string baseString, heightString;
    float baseFloat, heightFloat;

    // greet user
    std::cout << "Today we will calculate the area of a triangle.\n";
    std::cout << "\n";

    while (true) {
        // get the base
        std::cout << "Enter the base (cm): ";
        std::cin >> baseString;

        try {
            // convert from string to float
            baseFloat = std::stof(baseString);
            if (baseFloat <= 0) {
                // check if base is negative or 0
                std::cout << baseString << " is not a positive number, ";
                std::cout << "try again.\n";
            } else {
                std::cout << "\n";
                break;
            }
        } catch (std::invalid_argument) {
            // error message if input is not a number
            std::cout << baseString << " is not a number, try again.\n";
        }
    } while (true) {
        // get the height
        std::cout << "Enter the height (cm): ";
        std::cin >> heightString;

        try {
            // convert from string to float
            heightFloat = std::stof(heightString);
            if (heightFloat <= 0) {
                // check if height is negative or 0
                std::cout << heightString << " is not a positive number, ";
                std::cout << "try again.\n";
            } else {
                std::cout << "\n";
                break;
            }
        } catch (std::invalid_argument) {
            // error message if input is not a number
            std::cout << heightString << " is not a number, try again.\n";
        }
    } CalcArea(baseFloat, heightFloat);
}
