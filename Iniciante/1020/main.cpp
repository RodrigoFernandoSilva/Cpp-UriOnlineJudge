#include <iostream>

using namespace std;

int main() {

    int ano = 0;
    int mes = 0;
    int dia;

    cin >> dia;

    if (dia >= 365) {
        ano = dia / 365;
        dia -= ano * 365;
    }
    if (dia >= 30) {
        mes = dia / 30;
        dia -= mes * 30;
    }

    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dia << " dia(s)" << endl;

    return 0;
}
