#include "CPower.h"
#include <iostream>

using namespace std;

int main() {
    Power p1(2.0, 3.0);
    p1.Dump();  // Output: Power function: f(x) = 2 * x^3

    double val = p1.GetValue(2.0);
    cout << "Value at x=2: " << val << endl;

    Power p2 = p1;
    cout << (p1 == p2 ? "Equal" : "Different") << endl;

    return 0;
}
