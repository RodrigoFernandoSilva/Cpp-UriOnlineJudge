#include <iostream>
#include <iomanip>
#include <math.h>

#define PI 3.14159

using namespace std;

int main() {

    int raio;

    cin >> raio;

    cout << fixed << setprecision(3) << "VOLUME = " << ((4.0/3.0) * PI * pow(raio, 3)) << endl;

    return 0;
}
