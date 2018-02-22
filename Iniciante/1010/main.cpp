#include <iostream>

using namespace std;

int main() {

    double preco1, preco2;
    int codigo1, codigo2;
    int quantidade1, quantidade2;

    cin >> codigo1;
    cin >> quantidade1;
    cin >> preco1;

    cin >> codigo2;
    cin >> quantidade2;
    cin >> preco2;

    double total;
    total = (quantidade1 * preco1) + (quantidade2 * preco2);
    cout.precision(2);
    cout << fixed << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}
