#include <iostream>
#include <iomanip>

#define PESO1 2
#define PESO2 3
#define PESO3 5

using namespace std;

int main() {

    double A;
    double B;
    double C;
    double media;

    cin >> A;
    A *= PESO1;

    cin >> B;
    B *= PESO2;

    cin >> C;
    C *= PESO3;

    media = A + B + C;
    media /= (PESO1 + PESO2 + PESO3);
    cout << fixed << setprecision(1) << "MEDIA = " << media << endl;

    return 0;
}
