// Copyright (C) 2021 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on January 2021
// This program calculates the cost of a pizza


#include <iostream>
#include <iomanip>


main() {
    // this function calculates the cost of a pizza

    // constants
    const float LABOUR = 0.75;
    const float RENT = 1.00;
    const float COST_PER_INCH = 0.50;
    const float HST = 0.13;
    float diameter;
    float total;

    // input
    std::cout << "Enter diameter of pizza (inches): ";
    std::cin >> diameter;

    // process
    total = (diameter * COST_PER_INCH + RENT + LABOUR) * (HST + 1);

    // output
    std::cout << "" << std::endl;
    std::cout << "The total cost for a " << diameter << " inch pizza is: $"
              << std::fixed << std::setprecision(2) << std::setfill('0')
              << total  << std::endl;
}
