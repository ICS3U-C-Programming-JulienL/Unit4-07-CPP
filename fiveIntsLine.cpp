// Copyright (c) 2023 Julien Lamoureux All rights reserved.

// Created By: Julien Lamoureux
// Date: November 13, 2023
// Displaying numbers between 1000 and 2000,
// but a newline is made if the number % 5 == 0

#include <cmath>
#include <cstdlib>
#include <iostream>

int main() {
    // declare variables
    int counter;

    // tells the user what the program does
    std::cout << "This program displays all numbers between 1000 and 2000";
    std::cout << ", but a newline is made for evert multiple of 5.";

    // use a for loop for all numbers between 1000 and 2000
    for (counter = 1000; counter <= 2000; counter++) {
        // if the counter = 1000, then print on the same line
        if (counter == 0) {
            std::cout << counter << " ";
        } else if (counter % 5 == 0) {
            // otherwise, if it's a multiple five, make a newline
            std::cout << "\n" << counter << " ";
        } else {
            // otherwise, then print on the same line
            std::cout << counter << " ";
        }
        }
}
