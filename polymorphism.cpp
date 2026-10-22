// Polymorphism: Payment -> MobileMoney, Card
#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay() {
        cout << "Making a payment." << endl;
    }
};

class MobileMoney : public Payment {
public:
    void pay() override {
        cout << "Paying with Mobile Money." << endl;
    }
};

class Card : public Payment {
public:
    void pay() override {
        cout << "Paying with a Card." << endl;
    }
};

int main() {
    MobileMoney m;
    Card c;
    Payment* p;

    p = &m;
    p->pay();   // Mobile Money version runs

    p = &c;
    p->pay();   // Card version runs
    return 0;
}