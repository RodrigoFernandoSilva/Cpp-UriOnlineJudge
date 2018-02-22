#include <iostream>

using namespace std;

int main() {

    int notas100 = 0;
    int notas50  = 0;
    int notas20  = 0;
    int notas10  = 0;
    int notas5   = 0;
    int notas2   = 0;

    double n;
    cin >> n;

    int dinheiro = n;

    n *= 100;
    int moedas = n - (dinheiro * 100);

    //Notas--------------------------------------------
    notas100 = dinheiro % 100;
    notas100 = (dinheiro - notas100) / 100;
    dinheiro -= notas100 * 100;

    notas50 = dinheiro % 50;
    notas50 = (dinheiro - notas50) / 50;
    dinheiro -= notas50 * 50;

    notas20 = dinheiro % 20;
    notas20 = (dinheiro - notas20) / 20;
    dinheiro -= notas20 * 20;

    notas10 = dinheiro % 10;
    notas10 = (dinheiro - notas10) / 10;
    dinheiro -= notas10 * 10;

    notas5 = dinheiro % 5;
    notas5 = (dinheiro - notas5) / 5;
    dinheiro -= notas5 * 5;

    notas2 = dinheiro % 2;
    notas2 = (dinheiro - notas2) / 2;
    dinheiro -= notas2 * 2;

    int moedas100 = 0;
    int moedas050 = 0;
    int moedas025 = 0;
    int moedas010 = 0;
    int moedas005 = 0;
    int moedas001  = 0;

    //Moedas--------------------------------------------
    moedas100 = dinheiro;

    moedas050 = moedas % 50;
    moedas050 = (moedas - moedas050) / 50;
    moedas -= moedas050 * 50;

    moedas025 = moedas % 25;
    moedas025 = (moedas - moedas025) / 25;
    moedas -= moedas025 * 25;

    moedas010 = moedas % 10;
    moedas010 = (moedas - moedas010) / 10;
    moedas -= moedas010 * 10;

    moedas005 = moedas % 5;
    moedas005 = (moedas - moedas005) / 5;
    moedas -= moedas005 * 5;

    moedas001 = moedas;

    cout << "NOTAS:" << endl;
    cout << notas100 << " nota(s) de R$ 100.00\n";
    cout << notas50 << " nota(s) de R$ 50.00\n";
    cout << notas20 << " nota(s) de R$ 20.00\n";
    cout << notas10 << " nota(s) de R$ 10.00\n";
    cout << notas5 << " nota(s) de R$ 5.00\n";
    cout << notas2 << " nota(s) de R$ 2.00\n";
    cout << "MOEDAS:" << endl;
    cout << moedas100 << " moeda(s) de R$ 1.00\n";
    cout << moedas050 << " moeda(s) de R$ 0.50\n";
    cout << moedas025 << " moeda(s) de R$ 0.25\n";
    cout << moedas010 << " moeda(s) de R$ 0.10\n";
    cout << moedas005 << " moeda(s) de R$ 0.05\n";
    cout << moedas001 << " moeda(s) de R$ 0.01\n";

    return 0;
}
