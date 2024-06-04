#include <iostream>
using namespace std;

struct Complex {
    double real;
    double imag;
};

Complex add(Complex a, Complex b) {
    Complex result;
    result.real = a.real + b.real;
    result.imag = a.imag + b.imag;
    return result;
}

Complex sub(Complex a, Complex b) {
    Complex result;
    result.real = a.real - b.real;
    result.imag = a.imag - b.imag;
    return result;
}

Complex mul(Complex a, Complex b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

Complex div(Complex a, Complex b) {
    Complex result;
    double denominator = b.real * b.real + b.imag * b.imag;
    result.real = (a.real * b.real + a.imag * b.imag) / denominator;
    result.imag = (a.imag * b.real - a.real * b.imag) / denominator;
    return result;
}

void printComplex(Complex c) {
    cout << c.real << " + " << c.imag << "i" << endl;
}

int main() {
    Complex a, b, result;

    cout << "Введіть перший комплексний номер: ";
    cin >> a.real >> a.imag;

    cout << "Введіть другий комплексний номер: ";
    cin >> b.real >> b.imag;

    result = add(a, b);
    cout << "Сума: ";
    printComplex(result);

    result = sub(a, b);
    cout << "Різниця: ";
    printComplex(result);

    result = mul(a, b);
    cout << "Множення: ";
    printComplex(result);

    result = div(a, b);
    cout << "Ділення: ";
    printComplex(result);

    return 0;
}