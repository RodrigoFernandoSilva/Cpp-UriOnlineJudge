#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double salario;
    double totalVendas;
    double total;
    string nome;

    cin >> nome;

    cin >> salario;

    cin >> totalVendas;

    total = salario + (totalVendas * 0.15);
    cout << fixed << setprecision(2) << "TOTAL = R$ " << total << endl;

    return 0;
}
