#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int tempo;
    int velocidadeMedia;

    cin >> tempo;

    cin >> velocidadeMedia;

    double distancia;
    distancia = tempo * velocidadeMedia;
    cout << fixed << setprecision(3) << (distancia / 12) << endl;

    return 0;
}
