#include <iostream>
#include <iomanip>
#include <math.h>

#define PI 3.14159

using namespace std;

int main() {

    double a;
    double b;
    double c;

    cin >> a;

    cin >> b;

    cin >> c;

    cout << fixed << setprecision(3) << "TRIANGULO: " << ((a * c) / 2) << endl;
    cout << "CIRCULO: " << (PI * pow(c, 2)) << endl;
    cout << "TRAPEZIO: " << (((a + b) * c) / 2) << endl;
    cout << "QUADRADO: " << (b * b) << endl;
    cout << "RETANGULO: " << (a * b) << endl;

    return 0;
}
