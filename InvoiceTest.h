#ifndef INVOICETEST_H
#define INVOICETEST_H

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testAddServiceCost();
        // Add other test methods here
    }

private:
    void testAddServiceCost() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }

        // Add more test cases here

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(-10);
            if (invoice.getDollarsOwed() != 0) {
                std::cout << "Test 3 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            if (invoice.addServiceCost(-10)) {
                std::cout << "Test 4 failed!" << std::endl;
            }
        }
    }

    // Add other test functions here

    void testGetInvoiceId() {
        {
            Invoice invoice("ABCD");
            if (invoice.getInvoiceId() != "ABCD") {
                std::cout << "Test 5 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("A");
            if (invoice.getInvoiceId() != "A") {
                std::cout << "Test 6 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("");
            if (invoice.getInvoiceId() != "") {
                std::cout << "Test 7 failed!" << std::endl;
            }
        }

    }

    void testInvoice() {
        {
            Invoice invoice("ABCD");
            if (invoice.getInvoiceId() != "ABCD") {
                std::cout << "Test 8 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("A");
            if (invoice.getDollarsOwed() != 0) {
                std::cout << "Test 9 failed!" << std::endl;
            }
        }

    }
};

#endif