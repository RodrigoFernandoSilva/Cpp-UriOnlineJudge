#include <iostream>

using namespace std;

int main() {

    int numero;
    int numeroBackup;
    int notas100 = 0;
    int notas50  = 0;
    int notas20  = 0;
    int notas10  = 0;
    int notas5   = 0;
    int notas2   = 0;
    int notas1;

    cin >> numero;
    numeroBackup = numero;

    if (numero >= 100) {
        notas100 = numero / 100;
        numero -= (notas100 * 100);
    }
    if (numero >= 50) {
        notas50 = 1;
        numero -= 50;
    }
    if (numero >= 20) {
        notas20 = numero / 20;
        numero -= (notas20 * 20);
    }
    if (numero >= 10) {
        notas10 = 1;
        numero -= 10;
    }
    if (numero >= 5) {
        notas5 = 1;
        numero -= 5;
    }
    if (numero >= 2) {
        notas2 = numero / 2;
        numero -= (notas2 * 2);
    }
    notas1 = numero;

    cout << numeroBackup << endl;
    cout << notas100 << " nota(s) de R$ 100,00" << endl;
    cout << notas50 << " nota(s) de R$ 50,00" << endl;
    cout << notas20 << " nota(s) de R$ 20,00" << endl;
    cout << notas10 << " nota(s) de R$ 10,00" << endl;
    cout << notas5 << " nota(s) de R$ 5,00" << endl;
    cout << notas2 << " nota(s) de R$ 2,00" << endl;
    cout << notas1 << " nota(s) de R$ 1,00" << endl;

    return 0;
}
