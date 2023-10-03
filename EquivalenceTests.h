#ifndef EQUIVALENCETESTS_H
#define EQUIVALENCETESTS_H

#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        // Add other tests here
        testZeroes();
        testLargeIntegers();
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        }
        if (addition.add(-5, 5) != 0) {
            std::cout << "Test 3 failed!" << std::endl;
        }
    }

    // Add other test functions here

    void testZeroes() {
        Addition addition;
        if (addition.add(0, 0) != 0) {
            std::cout << "Test 4 failed!" << std::endl;
        }
    }

    void testLargeIntegers() {
        Addition addition;
        if (addition.add(10050, 12430) != 22480) {
            std::cout << "Test 5 failed!" << std::endl;
        }
        if (addition.add(-11000, 11000) != 0) {
            std::cout << "Test 6 failed!" << std::endl;
        }
    }
};

#endif