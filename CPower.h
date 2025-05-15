/*! @file CPower.h
    @brief Derived class implementing a power function: f(x) = k * x^e
    @author Mattia De Lorenzi
*/

#ifndef CPOWER_H
#define CPOWER_H

#include "CFunction.h"

using namespace std;

class Power : public Function {
private:
    double k_coeff;
    double e_coeff;

public:
    /// @name CONSTRUCTORS/DESTRUCTOR
    /// @{
    Power();                                        // Default constructor
    Power(double k, double e);                      // Parameterized constructor
    Power(const Power& other);                      // Copy constructor
    virtual ~Power();                               // Destructor
    /// @}

    /// @name OPERATORS
    /// @{
    Power& operator=(const Power& other);           // Assignment operator
    bool operator==(const Power& other) const;      // Equality operator
    /// @}

    /// @name GETTERS
    /// @{
    virtual double GetValue(double in) const override;
    /// @}

    /// @name DEBUG
    /// @{
    virtual void Dump() override;
    /// @}
};

#endif
