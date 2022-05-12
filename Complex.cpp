#include "Complex.h"

void Complex::printComplex()
{
    cout << this->re;

    if (this->im != 0) {
        if (this->im > 0) {
            cout << "+";
        }
        cout << this->im << "i";
    }

}

double Complex::abs()
{
    double result = sqrt(pow(this->re, 2) + pow(this->im, 2));
    return result;
}