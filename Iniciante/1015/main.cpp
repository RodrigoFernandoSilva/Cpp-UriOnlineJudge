#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {

    double ponto1X;
    double ponto1Y;

    double ponto2X;
    double ponto2Y;

    cin >> ponto1X;
    cin >> ponto1Y;

    cin >> ponto2X;
    cin >> ponto2Y;

    double distancia;
    distancia = sqrt((pow((ponto2X - ponto1X), 2)) + (pow((ponto2Y - ponto1Y), 2)));
    cout << fixed << setprecision(4) << distancia << endl;

    return 0;
}
