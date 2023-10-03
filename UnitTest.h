#ifndef UNITTEST_H
#define UNITTEST_H

#include <iostream>
#include "Addition.h"

class UnitTest {
public:
    void runTests() {
        testAddition();
    }

private:
    void testAddition() {
        Addition addition;

        if (addition.add(1, 2) != 3) {
            std::cout << "Test 1 failed!" << std::endl;
        }
        // Add more tests here
        if (addition.add(0, 0) != 0) {
            std::cout << "Test 2 failed" << std::endl;
        }
        if (addition.add(-1, -3) != -4) {
            std::cout << "Test 3 failed" << std::endl;
        }
        if (addition.add(10000, 500000) != 510000) {
            std::cout << "Test 4 failed" << std::endl;
        }
    }
};

#endif