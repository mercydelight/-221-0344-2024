#include <iostream>
using namespace std;

void largestFraction(double &a, double &b, double &c, double &largest) {
    largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
}

int main() {
    double x = 1.2, y = 3.4, z = 2.1, max;
    largestFraction(x, y, z, max);
    cout << "Largest fraction is: " << max;
    return 0;
    }
};
