#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double combustivel;
    int distancia;

    cin >> distancia;

    cin >> combustivel;

    cout << fixed << setprecision(3) << (distancia / combustivel) << " km/l" << endl;

    return 0;
}
