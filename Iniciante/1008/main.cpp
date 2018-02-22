#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double valorPorHora;
    int numeroFuncionario;
    int horasTrabalhadas;

    cin >> numeroFuncionario;

    cin >> horasTrabalhadas;

    cin >> valorPorHora;

    cout << "NUMBER = " << numeroFuncionario << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << (valorPorHora * horasTrabalhadas) << endl;

    return 0;
}
