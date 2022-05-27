// Copyright (c) 2022 Yiyun Qin All rights reserved
//
// Created by Yiyun Qin
// Created in May 2022
// This is a math program, finding the minimum number in random numbers

#include <iostream>
#include <random>
#include <array>


template<size_t N>
int SmallestNumber(std::array<int, N> listOfNumbers) {
    // This function finds the minimum value

    // process & output
    int minimum = listOfNumbers[0];
    for (int aSingleNumber : listOfNumbers) {
        if (aSingleNumber < minimum) {
            minimum = aSingleNumber;
        }
    }
    return minimum;
}


int main() {
    // This function gets random numbers and does output
    int singleNumber;
    std::array<int, 10> randomNumber;
    int answer;

    // input
    std::cout << "Here is a list of random numbers: \n" << std::endl;
    for (int loopCounter = 0; loopCounter < 10; loopCounter++) {
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        singleNumber = idist(rgen);
        randomNumber[loopCounter] = singleNumber;
        std::cout << "The random number is " << singleNumber << std::endl;
    }

    // process
    answer = SmallestNumber(randomNumber);
    std::cout << "\nThe smallest number is " << answer << std::endl;
    std::cout << "\nDone.";
}
