// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Created on: October 31, 2022
// This program asks the user for a positive number and
// uses a do while loop to add up / calculate the factorial
// It will then display the factorial to the user

#include <iostream>

int main() {
    // Initializes Variables
    int loopCounter = 0;
    int factorialNumber = 1;
    int userNumber;
    float userNumberFloat;
    std::string userNumberString;

    // Asks user for an integer
    std::cout << "Enter a positive integer: ";
    std::cin >> userNumberString;

    // Checks for exceptions
    try {
        // Converts user input into different data types
        // to check for invalid inputs (later)
        userNumberFloat = stof(userNumberString);
        userNumber = stoi(userNumberString);

        // IF the user entered a number with decimals
        if (userNumber != userNumberFloat) {
            std::cout << userNumberString << " is not a positive INTEGER!"
            << std::endl;

        // IF the user enters a negative number
        } else if (userNumber < 0) {
            std::cout << userNumberString << " is not a POSITIVE integer!"
            << std::endl;

        // IF the user entered a valid number
        } else {
            // Calculates the factorial of the user's number
            // and displays how many times it has looped
            do {
                // Increments loop counter
                loopCounter++;

                // Displays how many times it has looped
                std::cout << "Tracking " << loopCounter <<
                " times through the loop." << std::endl;

                // Calculates the factorial (multiplies all numbers up to
                // and including the user number together)
                factorialNumber *= loopCounter;

            // Condition for Do-While loop
            } while (loopCounter < userNumber);

            // Displays the factorial to the user
            std::cout << userNumber << "! = " << factorialNumber << std::endl;
        }

    // In the event of an exception
    } catch (std::invalid_argument) {
        std::cout << userNumberString << " is not a whole positive number!"
        << std::endl;
    }
}
