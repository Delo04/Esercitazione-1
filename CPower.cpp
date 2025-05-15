#include "CPower.h"
#include <iostream>
#include <cmath>

using namespace std;

// Default constructor
Power::Power() : k_coeff(1.0), e_coeff(1.0) {}

// Parameterized constructor
Power::Power(double k, double e) : k_coeff(k), e_coeff(e) {}

// Copy constructor
Power::Power(const Power& other)
    : k_coeff(other.k_coeff), e_coeff(other.e_coeff) {}

// Destructor
Power::~Power() {}

// Assignment operator
Power& Power::operator=(const Power& other) {
    if (this != &other) {
        k_coeff = other.k_coeff;
        e_coeff = other.e_coeff;
    }
    return *this;
}

// Equality operator
bool Power::operator==(const Power& other) const {
    return (k_coeff == other.k_coeff && e_coeff == other.e_coeff);
}

// Evaluate the function f(x) = k * x^e
double Power::GetValue(double in) const {
    return k_coeff * pow(in, e_coeff);
}

// Debug function
void Power::Dump() {
    cout << "Power function: f(x) = " << k_coeff << " * x^" << e_coeff << endl;
}
