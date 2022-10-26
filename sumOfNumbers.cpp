// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/10/26
// Asks the user for an integer and uses
// A while loop to determine the sum of numbers
// From 0 up to that integer

#include <iostream>
#include <string>

int main() {
    // Variables for the correct number and guess
    std::string userNumber;
    int userInteger;
    int counter = 0;
    int sum = 0;
    float userFloat;

    // Title of the program
    std::cout << "Sum of Numbers\n";

    // User input for the two questions
    std::cout << "Please enter a positive integer: ";
    std::cin >> userNumber;
    // Try Catch statement to make sure the answer is an integer and
    // Whole number
    try {
        userInteger = std::stoi(userNumber);
        float userFloat = stof(userNumber);
        // To make sure the user input is a whole number
        // (credits to you Ms. Raffin)
        if (userFloat != static_cast<int>(userFloat) || userFloat <= 0) {
            std::cout << "Please enter a WHOLE number!\n";
        }
        // IF statement to make sure the input is positive
        if (userInteger < 0) {
            std::cout << "Please enter a POSITIVE number!\n";
        } else {
            // While loop to add up the sum
            while (counter <= userInteger) {
                std::cout << counter << "+ ";
                sum = counter + sum;
                counter = counter + 1;
            }
            std::cout << "The sum of all numbers is " << sum << "\n";
        }
    } catch (std::invalid_argument) {
        // if the user does not enter an integer
        std::cout << "Please enter an INTEGER!\n";
    }
}
