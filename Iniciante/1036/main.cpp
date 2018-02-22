#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double a, b, c;

    cin >> a >> b >> c;

    double delta = pow(b, 2) - 4 * a * c;

    if (delta < 1 || a == 0) {
        cout << "Impossivel calcular" << endl;
    } else {
        double x1 = ((b * -1) + sqrt(delta)) / (2 * a);
        double x2 = ((b * -1) - sqrt(delta)) / (2 * a);

        cout << fixed << setprecision(5) << "R1 = " << x1 << endl;
        cout << "R2 = " << x2 << endl;
    }

    return 0;
}
