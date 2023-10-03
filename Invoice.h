#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>

using namespace std;

class Invoice {
public:
    
    string invoiceId;
    float dollarsOwed;

    Invoice(string InvoiceId){
        invoiceId = InvoiceId;
        dollarsOwed = 0.0;
    }

    bool addServiceCost(float costDollars){
        if (costDollars >= 0){
            dollarsOwed += costDollars;
            return 1;
        }
        return 0;
    }

    float getDollarsOwed(){
        return dollarsOwed;
    }
    string getInvoiceId(){
        return invoiceId;
    }

};

#endif