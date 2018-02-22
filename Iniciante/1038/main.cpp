#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    float tebela[5];
    int codigo;
    int quantidade;

    tebela[0] = 4.0;
    tebela[1] = 4.5;
    tebela[2] = 5.0;
    tebela[3] = 2.0;
    tebela[4] = 1.5;

    cin >> codigo >> quantidade;

    cout << fixed << setprecision(2) << "Total: R$ " << (tebela[codigo - 1] * quantidade) << endl;

    return 0;
}
