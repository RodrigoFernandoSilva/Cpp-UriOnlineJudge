#include <iostream>
#include <math.h>
#include <iomanip>

#define PI 3.14159;

using namespace std;

int main(){

    double raio;
    double area;

    cin >> raio;

    raio = pow(raio, 2);
    area = raio * PI;

    cout << "A=" << fixed << setprecision(4) << area << endl;

    return 0;

}
